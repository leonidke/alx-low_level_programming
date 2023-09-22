#!/usr/bin/bash
gcc -Wall -c -fPIC *.c
gcc -shared -o *.o -o liball.so
