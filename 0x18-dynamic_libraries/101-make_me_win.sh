#!/bin/bash
wget -P /tmp/ https://raw.github.com/BekaHabesha/alx-low_level_programming/main/0x18-dynamic_libraries/lib_beki_hacker.so
LD_PRELOAD=/tmp/lib_beki_hacker.so
