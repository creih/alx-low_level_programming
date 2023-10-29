#!/bin/bash
gcc -c -Wall -Wextra -Werror -pedantic -o ./*.c
ar -rcs liball.a ./*.o
