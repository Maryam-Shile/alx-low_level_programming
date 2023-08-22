#!/bin/bash
gcc -shared -fPIC -o d52e6c18e0723f5b025a75dea19ef365.so *.c
export LD_PRELOAD = ./d52e6c18e0723f5b025a75dea19ef365.so
