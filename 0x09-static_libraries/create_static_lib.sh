#!/bin/bash
gcc -wall -werror -wetra -pedantic -c *.c
ar -rc liball.a *.o
