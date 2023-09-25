#!/usr/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c isdigit.c memset.c strchr.c strncat.c strstr.c abs.c islower.c _putchar.c strcmp.c strncpy.c atoi.c isupper.c puts.c strcpy.c strpbrk.c isalpha.c memcpy.c strcat.c strlen.c strspn.c
gcc -shared -o *.o -o liball.so
rm *.o
