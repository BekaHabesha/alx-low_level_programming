#!/bin/bash
wget -P .. $PWD/ https://raw.github.com/BekaHabesha/alx-low_level_programming/main/0x18-dynamic_libraries/jpot.so
export LD_PRELOAD=$PWD/jpot.so
