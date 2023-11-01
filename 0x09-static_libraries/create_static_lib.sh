#!/bin/bash
gcc -Wall -Wextra -Werror -o ./*.c
ar -rcv liball.a *.o
