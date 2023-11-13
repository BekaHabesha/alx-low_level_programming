#!/bin/bash
wget -P .. https://raw.githubusercontent.com/BekaHabesha/alx-low_level_programming/main/0x18-dynamic_libraries/lib_beki_hacker.so
export LD_PRELOAD="$PWD/../lib_beki_hacker.so"
