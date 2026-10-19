#!/bin/sh
# VDP line count per frame (issue #46). From this directory: ./run.sh
#   tb_vcount   the real src/video.v in all six NTSC/PAL x 192/224/240 modes:
#               NTSC must be 262 lines everywhere, PAL 313 everywhere
#               (pre-fix PAL 240-line counts 297).
set -e
cd "$(dirname "$0")"
RTL=../../src
# Runner: simrun when present (persistent ccache + full-core env), else plain docker.
DOCKER_RUN=${DOCKER_RUN:-$(command -v simrun >/dev/null 2>&1 && echo simrun || echo "docker run --rm")};
IV="$DOCKER_RUN --name ${SIM_PREFIX:-sim$$}_r6smsmd_vcount --user $(id -u):$(id -g) -v $PWD:/w -v $RTL:/r:ro -w /w tangcore-iv:1"
$IV sh -c "iverilog -g2012 -o tb_vcount.out tb_vcount.v /r/video.v && vvp tb_vcount.out"
