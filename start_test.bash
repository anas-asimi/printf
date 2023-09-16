#!/usr/bin/env bash

clear
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format ./test/main.c _printf.c -o ./test/output 
./test/output
rm ./test/output
