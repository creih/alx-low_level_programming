#!/bin/bash
gcc -c -Wall *.c
ar -rcv liball.a *.o
