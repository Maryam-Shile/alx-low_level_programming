#!/bin/bash
gcc -c 0-isupper.c
gcc -c 0-strcat.c
gcc -c 1-isdigit.c
gcc -c 1-strncat.c
gcc -c 2-strlen.c
gcc -c 3-islower.c
gcc -c 3-strcmp.c
gcc -c 4-isalpha.c
gcc -c 5-strstr.c
gcc -c 9-strcpy.c
gcc -c _putchar.c
gcc -c 0-memset.c
gcc -c 100-atoi.c
gcc -c 1-memcpy.c
gcc -c 2-strchr.c
gcc -c 2-strncpy.c
gcc -c 3-puts.c
gcc -c 3-strspn.c
gcc -c 4-strpbrk.c
gcc -c 6-abs.c
ar rcs liball.a *.o

