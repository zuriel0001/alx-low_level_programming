#!/bin/bash
wget -P /tmp/ https://raw.github.com/zuriel0001/holbertonschool-low_level_programming/master/0x18-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so
