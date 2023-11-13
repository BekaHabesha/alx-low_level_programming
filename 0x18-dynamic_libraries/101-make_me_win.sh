#!/bin/bash
gcc *.o -shared -o lib_beki_hacker.so
LD_PRELOAD=$PWD/lib_beki_hacker.so
