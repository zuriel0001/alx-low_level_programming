#!/bin/bash
wget -P .. https://raw.githubusercontent.com/zuriel0001/alx-low_level_programming/master/0x18-dynamic_libraries/objects
export LD_PRELOAD="$PWD/../objects"
