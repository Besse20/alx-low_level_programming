#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Besse20/alx-low_level_programming/main/0x18-dynamic_libraries/libbesse.so
export LD_PRELOAD="$PWD/../libbesse.so"
