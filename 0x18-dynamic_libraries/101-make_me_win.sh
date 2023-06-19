#!/bin/bash
wget -q --output-document=$HOME/win.so https://raw.githubusercontent.com/zuriel0001/alx-low_level_programming/main/0x18-dynamic_libraries/win.so
export LD_PRELOAD=$HOME/win.so
