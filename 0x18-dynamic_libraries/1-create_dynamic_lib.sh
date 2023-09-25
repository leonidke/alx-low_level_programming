#!/usr/bin/bash
gcc -Wall -c -fPIC *.c
gcc -shared -o *.o -o liball.so
rm *.o
nm -D --defined-only liball.so
