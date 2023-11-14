#!/bin/bash
wget -P /$PWD/ https://raw.github.com/BekaHabesha/alx-low_level_programming/main/0x18-dynamic_libraries/hacked.so
export LD_PRELOAD=/$PWD/hacked.so
