#!/usr/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
gcc -shared -o *.o -o liball.so
rm *.o
