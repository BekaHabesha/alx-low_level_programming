#!/bin/bash
wget -P /tmp https://github.com/BekaHabesha/alx-low_level_programming/master/0x18-dynamic_libraries/lib_beki_hacker.so
export LD_PRELOAD =/tmp/lib_beki_hacker.so
