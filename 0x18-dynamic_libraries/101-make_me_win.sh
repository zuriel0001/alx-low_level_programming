#!/bin/bash
wget -P /tmp/ https://raw.github.com/david-develop/holbertonschool-low_level_programming/master/0x18-dynamic_libraries/gigalib.so
export LD_PRELOAD=/tmp/gigalib.so
