// Verilator harness for the SMS frame-lock soak: exact-rate clocks (double
// fs scheduling, no drift), the scenario (power-on, menu pause, game-reload
// reset, second pause over ~400 NTSC frames) and the checks. Mirrors
// tb_frame_lock.v; this is the engine that makes 400+ frames affordable.
// Configs (argv[2]): sms (192-line, default), sms224, sms240 (the VDP's
// 224/240-line counter branches; sms2hdmi stores and halts the full active
// height), gg (Game Gear window). Optional argv[3] "short" quarters the scenario.
//
// The hz120 variant soaks the 480p120 BFI timing at full scale: every game
// frame must be read twice (lit pass, then inserted pass), each pass from a
// single game frame (per-line write-frame tags), lit passes stepping by
// exactly one game frame, with the inserted pass repeating the lit one; the
// inserted pass is all black (mode 1). Optional argv[4] selects the BFI mode
// (default 1, black); the black/inserted visual check only applies to mode
// 1, the lock, rate, tag and audio checks run in every mode. The swap
// interval (1800 game frames) is longer than the soak, so no phase swap
// happens here; the swap itself is covered by a directed Python model (see
// the report), like the NES reference.
//
// Exact rates: clk_sys 50*29/27 MHz, clk_pixel 74.25 MHz (hz120: 50*28/26,
// 54 MHz). Time is counted in sys-clock edges for waits/ages (theory:
// steady wait 106.6 sys, HDMI frame 896146.6 sys; hz120: 2293 sys, HDMI
// frame 449166.7 sys) and checked against integer bands, so the verdict
// does not depend on the time base.
// Prints tb_frame_lock: PASS on success (and returns nonzero otherwise).
#include <cstdio>
#include <cstdint>
#include <string>
#include <cmath>
#include "Vfl_top.h"
#include "verilated.h"

#ifdef HZ120
static const int64_t WAIT_LO = 1900;     // steady waits stay in 1900..2700 sys
static const int64_t WAIT_HI = 2700;
static const int64_t RATE_LO = 449160;   // sys edges per HDMI frame
static const int64_t RATE_HI = 449173;
static const int64_t MAX_AGE = 860000;   // reads must be this VDP frame's or the
                                         // previous one's data (inserted pass
                                         // lags one game frame: oldest ~805k)
static const int64_t STALE = 900000;     // older than a game frame: stale
#else
static const int64_t WAIT_LO = 80;       // steady waits stay in 80..140 sys
static const int64_t WAIT_HI = 140;
static const int64_t RATE_LO = 896140;   // sys edges per HDMI frame
static const int64_t RATE_HI = 896153;
static const int64_t AGE_MAX = 550000;   // reads must be this VDP frame's data
                                         // (stale = 896k+; GG's oldest line ~463k)
static const int64_t AGE_MIN = 30000;    // ... with margin (theory ~57k..259k)
#endif
static const int AUDIO_MAX_STEP = 4200;  // 440 Hz sine: ~1890/48 kHz step
static const int AUDIO_MAX_REPEAT = 6;

int main(int argc, char **argv) {
#ifdef HZ120
    if (argc < 2 || argc > 5) { fprintf(stderr, "usage: %s tag [sms|sms224|sms240|gg] [short] [bfi]\n", argv[0]); return 2; }
#else
    if (argc < 2 || argc > 4) { fprintf(stderr, "usage: %s tag [sms|sms224|sms240|gg] [short]\n", argv[0]); return 2; }
#endif
    std::string tag = argv[1];
    std::string cfg = argc >= 3 ? argv[2] : "sms";
    bool short_scn = argc >= 4 && std::string(argv[3]) == "short";
#ifdef HZ120
    int bfi = 1;
    if (argc >= 5) bfi = std::string(argv[4])[0] - '0';
#endif
    int gg_in = 0, mode_m1 = 0, mode_m3 = 0;
    int active_lines = 192;   // VDP active lines (vbl_st in src/video.v)
    if (cfg == "sms224") { mode_m1 = 1; active_lines = 224; }
    else if (cfg == "sms240") { mode_m3 = 1; active_lines = 240; }
    else if (cfg == "gg") { gg_in = 1; active_lines = 168; }
    else if (cfg != "sms") { fprintf(stderr, "unknown config %s\n", cfg.c_str()); return 2; }
#ifdef HZ120
    if (bfi < 0 || bfi > 3) { fprintf(stderr, "bad bfi %d\n", bfi); return 2; }
    // the black/inserted visual check only applies to mode 1; the lock, rate,
    // tag and audio checks run in every mode
    bool visual = (bfi == 1);
    // tag/age checks cover the full-frame picture (row 0 is blanking start):
    // at full scale every row reads a real line in both SMS and GG mode
    int pic_top = 0, pic_h = 480;
#endif
    // scenario lengths in VDP frames (run-in, run, run, run)
    const int LEN0 = short_scn ? 15 : 60, LEN2 = short_scn ? 30 : 120;
    const int LEN4 = short_scn ? 30 : 120, LEN6 = short_scn ? 25 : 100;
    const int RELEASED_MIN = short_scn ? 85 : 350;
    Verilated::commandArgs(argc, argv);
    Vfl_top *t = new Vfl_top;
    FILE *log = fopen(("tb_" + tag + ".log").c_str(), "w");
    FILE *af = fopen(("audio_hdmi_" + tag + ".hex").c_str(), "w");
#define LOG(...) do { fprintf(log, __VA_ARGS__); fputc('\n', log); } while (0)

#ifdef HZ120
    const double P_SYS_FS = 1e15 * 26.0 / (50.0e6 * 28.0);   // 53.8462 MHz
    const double P_PIX_FS = 1e15 / 54.0e6;
#else
    const double P_SYS_FS = 1e15 * 27.0 / (50.0e6 * 29.0);   // 53.7037 MHz
    const double P_PIX_FS = 1e15 / 74.25e6;
#endif
    int64_t k_sys = 0, k_pix = 0;
    int64_t next_sys = (int64_t)llround(P_SYS_FS);
    int64_t next_pix = (int64_t)llround(P_PIX_FS);
    int64_t now = 0, sys_edge = 0;
    auto eval = [&]() { t->eval(); };

    int64_t wr_last[240], wr_prev[240];
#ifdef HZ120
    int wr_frame[240];
    for (int i = 0; i < 240; i++) wr_last[i] = wr_prev[i] = 0, wr_frame[i] = -1;
    int game_wr = 0;                 // game frame currently being written
    int pass_fmin = 0, pass_fmax = -1, pass_ins = 0, last_lit = -1;
    int lit_nonzero = 0, ins_nonzero = 0, stale_in_frame = 0;
#else
    for (int i = 0; i < 240; i++) wr_last[i] = wr_prev[i] = 0;
#endif

    // scenario, counted in VDP frames (y==192 entries with the model running)
    int phase = 0;   // 0 run-in, 1 pause1, 2 run, 3 reset, 4 run, 5 pause2, 6 run, 7 done
    int frames_in_phase = 0;
    int64_t frozen_until = 0;
    bool por_n = false, pause_tb = false;
    bool prev192 = false;

#ifdef HZ120
    int locked = 0, forgive = 1, violations = 0;
    int halt_entered = 0, released = 0, hdmi_frames = 0, frame_idx = 0, vdp_frames = 0;
    int last_event_frame = 0;   // power-on counts as an event (startup settle)
#else
    int locked = 0, forgive = 1, settled = 0;
    int violations = 0;
    int halt_entered = 0, released = 0, hdmi_frames = 0, frame_idx = 0, vdp_frames = 0;
#endif
    int64_t t_enter = 0, last_wait = 0;
    int64_t frame_min_age = INT64_MAX, frame_max_age = 0;
    int64_t run_min_age = INT64_MAX, run_max_age = 0, run_min_wait = INT64_MAX, run_max_wait = 0;
    int64_t frame_sys0 = 0;
    int halt_q = 0, prev_por = 0, prev_pause = 0;
    int rd_q = -1;
    int cy_q = -1;
    int prev_hw = 0, max_hdmi_step = 0, max_repeat = 0, cur_repeat = 0;
    bool hw_first = true;
    int prev_ca = 0;
    int64_t mask_until = 0;
    const int64_t E_CAP = (int64_t)420e6;    // sys-edge cap (~7 s game time)

    t->clk = 0; t->clk_pixel = 0;
    t->por_n = 0; t->pause_tb = 0;
    t->gg_in = gg_in; t->mode_m1 = mode_m1; t->mode_m3 = mode_m3;
#ifdef HZ120
    t->bfi_mode = bfi;
#endif
    eval();
#ifdef HZ120
    LOG("config %s: gg=%d m1=%d m3=%d bfi=%d, VDP active lines %d, halt at y=%d",
        cfg.c_str(), gg_in, mode_m1, mode_m3, bfi, active_lines,
        gg_in ? 192 : mode_m3 ? 240 : mode_m1 ? 224 : 192);
#else
    LOG("config %s: gg=%d m1=%d m3=%d, VDP active lines %d, halt at y=%d",
        cfg.c_str(), gg_in, mode_m1, mode_m3, active_lines,
        gg_in ? 192 : mode_m3 ? 240 : mode_m1 ? 224 : 192);
#endif

    while (sys_edge < E_CAP) {
        bool is_sys = next_sys <= next_pix;
        now = is_sys ? next_sys : next_pix;
        if (is_sys) { next_sys = (int64_t)llround((double)++k_sys * P_SYS_FS + P_SYS_FS); }
        else { next_pix = (int64_t)llround((double)++k_pix * P_PIX_FS + P_PIX_FS); }
        if (is_sys) { t->clk = !t->clk; eval(); } else { t->clk_pixel = !t->clk_pixel; eval(); }
        bool rising_sys = is_sys && t->clk;
        bool rising_pix = !is_sys && t->clk_pixel;
        if (rising_sys) sys_edge++;

        if (rising_sys) {
            if (phase == 0 && !por_n && sys_edge > 50) { por_n = true; }
            bool is192 = (t->y == 192);
#ifdef HZ120
            if (is192 && !prev192) {
                game_wr++;           // writes from here belong to the next game frame
                if (!pause_tb && por_n) {
                    frames_in_phase++;
                    vdp_frames++;
                }
#else
            if (is192 && !prev192 && !pause_tb && por_n) {
                frames_in_phase++;
                vdp_frames++;
#endif
                if ((phase == 0 && frames_in_phase >= LEN0) ||
                    (phase == 2 && frames_in_phase >= LEN2) ||
                    (phase == 4 && frames_in_phase >= LEN4) ||
                    (phase == 6 && frames_in_phase >= LEN6)) {
                    frames_in_phase = 0;
                    phase++;
                    if (phase == 1 || phase == 5) { pause_tb = true; LOG("scenario: menu pause on at sys %lld", (long long)sys_edge); }
                    if (phase == 3) { por_n = false; LOG("scenario: game reload at sys %lld", (long long)sys_edge); }
                    if (phase == 7) break;
                }
#ifdef HZ120
            }
#else
            }
#endif
            prev192 = is192;
            if ((phase == 1 || phase == 5) && frozen_until == 0)
                frozen_until = sys_edge + (phase == 1 ? (int64_t)27e6 : (int64_t)9e6);
            if (phase == 3 && frozen_until == 0) frozen_until = sys_edge + 54;
        }
        if (frozen_until && sys_edge >= frozen_until) {
            frozen_until = 0;
            if (phase == 1 || phase == 5) { pause_tb = false; LOG("scenario: menu pause off at sys %lld", (long long)sys_edge); phase++; }
            else if (phase == 3) { por_n = true; phase++; }
        }
        t->por_n = por_n; t->pause_tb = pause_tb;

        if (rising_sys) {
            if (pause_tb || !por_n) locked = 0;
            if ((prev_por != por_n) || (prev_pause != pause_tb)) {
                forgive = 2;   // the re-lock can pass through two
                               // transitional waits (a reset that lands on
                               // a halt entry truncates that halt and
                               // leaves the next wait arbitrary too)
#ifdef HZ120
                last_event_frame = frame_idx;
                last_lit = -1;
                mask_until = sys_edge + 6 * 449167;   // ~6 HDMI frames
#else
                settled = 0;   // re-lock grace for the age checks
                mask_until = sys_edge + 3 * 896150;
#endif
            }
            prev_por = por_n; prev_pause = pause_tb;
            int halt = t->frame_halt;
            if (halt && !halt_q) {
                t_enter = sys_edge; halt_entered++;
                if (halt_entered <= 6 || (halt_entered % 100) == 0)
                    LOG("halt #%d enter at sys %lld (y=%d cy=%d)", halt_entered, (long long)t_enter, (int)t->y, (int)t->cy);
            }
            if (!halt && halt_q) {
                last_wait = sys_edge - t_enter; released++;
                if (last_wait < run_min_wait) run_min_wait = last_wait;
                if (last_wait > run_max_wait) run_max_wait = last_wait;
                if (halt_entered <= 6 || (released % 100) == 0)
                    LOG("halt #%d release wait=%lld sys (cy=%d)", halt_entered, (long long)last_wait, (int)t->cy);
                if (!pause_tb && por_n) {
                    // transitional waits (one full-frame slip after an
                    // event, plus the reset-on-halt-entry race, which
                    // truncates one halt and leaves the next arbitrary)
                    // are forgiven; anything else must be the rate
                    // difference
#ifdef HZ120
                    // (~2293 sys clocks)
#else
                    // (~107 sys clocks)
#endif
                    if (last_wait >= WAIT_LO && last_wait <= WAIT_HI) {
                        locked = 1;
                        forgive = 0;
                    } else if (forgive > 0) {
                        forgive--;
                        locked = 1;
                    } else {
                        LOG("FAIL: wait %lld sys (frame %d)", (long long)last_wait, frame_idx);
                        violations++;
                    }
                }
            }
            halt_q = halt;
            if (t->memA_we) {
                int ln = (t->memA_addr >> 8) & 0xffff;
#ifdef HZ120
                if (ln >= 0 && ln < 240) { wr_prev[ln] = wr_last[ln]; wr_last[ln] = sys_edge; wr_frame[ln] = game_wr; }
#else
                if (ln >= 0 && ln < 240) { wr_prev[ln] = wr_last[ln]; wr_last[ln] = sys_edge; }
#endif
            }
        }

        if (rising_pix) {
            int cy = t->cy;
#ifdef HZ120
            if (cy == 100 && cy_q != 100) pass_ins = t->bfi_ins;
            // BFI check: picture-centre sample (360, cy) on every picture row
            if (t->cx == 360 && cy >= pic_top && cy < pic_top + pic_h && locked) {
                if (pass_ins) { if (t->rgb_out != 0) ins_nonzero++; }
                else if (t->rgb_out != 0) lit_nonzero++;
            }
#endif
            if (cy == 0 && cy_q != 0 && cy_q >= 0) {
                int64_t len = frame_sys0 ? sys_edge - frame_sys0 : 0;
                frame_sys0 = sys_edge;
                if (frame_sys0 && por_n && len) {
                    if (len < RATE_LO || len > RATE_HI) { LOG("FAIL: hdmi frame %d len %lld sys", frame_idx, (long long)len); violations++; }
                    if (locked) {
#ifdef HZ120
                        if (frame_idx % 50 == 0 || frame_max_age > MAX_AGE || frame_min_age == INT64_MAX)
                            LOG("hdmi frame %d: ins=%d game=%d..%d min_age=%lld max_age=%lld wait=%lld", frame_idx, pass_ins, pass_fmin, pass_fmax, (long long)frame_min_age, (long long)frame_max_age, (long long)last_wait);
                        // settled: the phase is exact again at most two game
                        // frames (four HDMI frames) after any event
                        bool settled = frame_idx - last_event_frame > 6;
                        if (settled && pass_fmax >= 0) {
                            if (pass_fmin != pass_fmax) { LOG("FAIL: mixed game frames %d..%d in hdmi frame %d (ins=%d)", pass_fmin, pass_fmax, frame_idx, pass_ins); violations++; }
                            else if (!pass_ins) {
                                if (last_lit >= 0 && pass_fmin != last_lit + 1) { LOG("FAIL: lit game frame %d after %d in hdmi frame %d", pass_fmin, last_lit, frame_idx); violations++; }
                                last_lit = pass_fmin;
                            } else if (last_lit >= 0 && pass_fmin != last_lit) {
                                LOG("FAIL: inserted game frame %d, lit was %d, in hdmi frame %d", pass_fmin, last_lit, frame_idx); violations++;
                            }
                            if (visual && pass_ins && ins_nonzero) { LOG("FAIL: %d non-black centre samples in inserted hdmi frame %d", ins_nonzero, frame_idx); violations++; }
                            if (visual && !pass_ins && !lit_nonzero) { LOG("FAIL: lit hdmi frame %d all black at centre", frame_idx); violations++; }
                            if (frame_max_age > MAX_AGE) { LOG("FAIL: max age %lld sys in frame %d", (long long)frame_max_age, frame_idx); violations++; }
                            if (stale_in_frame) { LOG("FAIL: %d stale reads in frame %d", stale_in_frame, frame_idx); violations++; }
                        }
#else
                        if (frame_idx % 50 == 0 || frame_max_age > AGE_MAX || frame_min_age < AGE_MIN)
                            LOG("hdmi frame %d: min_age=%lld max_age=%lld wait=%lld", frame_idx, (long long)frame_min_age, (long long)frame_max_age, (long long)last_wait);
                        // settled>3: the phase is exact again at most two
                        // frames after any event (startup, pause-off, reload)
                        if (settled > 3 && frame_max_age > AGE_MAX) { LOG("FAIL: max age %lld sys in frame %d", (long long)frame_max_age, frame_idx); violations++; }
                        if (settled > 3 && frame_min_age < AGE_MIN) { LOG("FAIL: min age %lld sys in frame %d", (long long)frame_min_age, frame_idx); violations++; }
                        settled++;
#endif
                        if (frame_max_age > run_max_age) run_max_age = frame_max_age;
                        if (frame_min_age < run_min_age) run_min_age = frame_min_age;
                    }
                }
                frame_idx++;
                hdmi_frames++;
                frame_min_age = INT64_MAX;
                frame_max_age = 0;
#ifdef HZ120
                pass_fmin = 0; pass_fmax = -1; lit_nonzero = 0; ins_nonzero = 0; stale_in_frame = 0;
#endif
            }
            cy_q = cy;
            int rd = (t->memB_addr >> 8) & 0xffff;
#ifdef HZ120
            bool pic_row = cy >= pic_top && cy < pic_top + pic_h && cy != 0;
#endif
            if (rd != rd_q) {
                rd_q = rd;
#ifdef HZ120
                if (rd >= 0 && rd < 240 && locked && pic_row) {
                    int64_t w = (wr_last[rd] > 0 && wr_last[rd] < sys_edge) ? wr_last[rd] : wr_prev[rd];
                    int64_t age = (w > 0) ? sys_edge - w : INT64_MAX;
                    if (age < frame_min_age) frame_min_age = age;
                    if (age < run_min_age) run_min_age = age;
                    if (age != INT64_MAX) {
                        if (age > frame_max_age) frame_max_age = age;
                        if (age > run_max_age) run_max_age = age;
                        if (age > STALE) stale_in_frame++;
                    } else {
                        stale_in_frame++;
                    }
                    if (wr_frame[rd] >= 0) {
                        if (pass_fmax < 0 || wr_frame[rd] < pass_fmin) pass_fmin = wr_frame[rd];
                        if (wr_frame[rd] > pass_fmax) pass_fmax = wr_frame[rd];
                    }
                }
#else
                if (rd >= 0 && rd < 240 && locked && wr_last[rd]) {
                    int64_t age = sys_edge - wr_last[rd];
                    if (age < 0) age = sys_edge - wr_prev[rd];
                    if (age < frame_min_age) frame_min_age = age;
                    if (age > frame_max_age) frame_max_age = age;
                }
#endif
            }
            int ca = t->clk_audio;
            if (ca && !prev_ca && por_n && !pause_tb && sys_edge > mask_until) {
                int w0 = (int)(int16_t)t->audio_word0;
                fprintf(af, "%d\n", w0);
                if (!hw_first) {
                    int d = prev_hw >= w0 ? prev_hw - w0 : w0 - prev_hw;
                    if (d > max_hdmi_step) max_hdmi_step = d;
                    if (d == 0) { cur_repeat++; if (cur_repeat > max_repeat) max_repeat = cur_repeat; }
                    else cur_repeat = 0;
                    if (d > AUDIO_MAX_STEP) { LOG("FAIL: audio step %d", d); violations++; }
                    if (cur_repeat > AUDIO_MAX_REPEAT) { LOG("FAIL: audio repeat run %d", cur_repeat); violations++; }
                }
                hw_first = false; prev_hw = w0;
            } else if (ca && !prev_ca) {
                hw_first = true;   // masked/frozen: re-arm, resume is a fresh start
            }
            prev_ca = ca;
        }
    }

    LOG("done: halted=%d released=%d hdmi=%d vdp=%d violations=%d", halt_entered, released, hdmi_frames, vdp_frames, violations);
    LOG("audio: max_hdmi_step=%d (bound %d) max_repeat=%d", max_hdmi_step, AUDIO_MAX_STEP, max_repeat);
#ifdef HZ120
    LOG("wait sys: min=%lld max=%lld (steady theory 2293)", (long long)run_min_wait, (long long)run_max_wait);
#else
    LOG("wait sys: min=%lld max=%lld (steady theory 106.6)", (long long)run_min_wait, (long long)run_max_wait);
#endif
    LOG("age sys: min=%lld max=%lld", (long long)run_min_age, (long long)run_max_age);
    if (violations != 0) { LOG("tb_frame_lock: FAIL"); fclose(log); fclose(af); return 1; }
    if (released < RELEASED_MIN) { LOG("tb_frame_lock: FAIL: too few frames"); fclose(log); fclose(af); return 1; }
    LOG("tb_frame_lock: PASS");
    fclose(log); fclose(af);
    return 0;
}
