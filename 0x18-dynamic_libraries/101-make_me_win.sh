#!/bin/bash
wget -P /tmp/ https://raw.githubusercontent.com/BekaHabesha/alx-low_level_programming/main/0x18-dynamic_libraries/lib_beki_hacker.so
export LD_PRELOAD=/tmp/lib_beki_hacker.so
