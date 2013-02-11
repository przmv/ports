#!/bin/sh

find -mindepth 1 -path ./.git -prune -o -type d -exec prtverify {} \;
