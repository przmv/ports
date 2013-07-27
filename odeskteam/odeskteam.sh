#!/bin/sh

LD_LIBRARY_PATH=/usr/lib/ffmpeg-compat${LD_LIBRARY_PATH:+:$LD_LIBRARY_PATH} \
	/usr/bin/odeskteam-qt4 "$@"
