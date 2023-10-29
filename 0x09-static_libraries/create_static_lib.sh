#!/bin/bash
gcc -c -Wall -Wextra -Werror -pedantic -o ./*.c
ar -rcv liball.a ./*.o
