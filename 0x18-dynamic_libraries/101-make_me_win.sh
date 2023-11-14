#!/bin/bash
wget -P .. https://raw.githubusercontent.com/BekaHabesha/alx-low_level_programming/main/0x18-dynamic_libraries/libhacked.so
export LD_PRELOAD="$PWD/../libhacked.so"
