#!/bin/bash
gcc *.o -shared -o libhacked.so
LD_PRELOAD=$PWD/libhacked.so
