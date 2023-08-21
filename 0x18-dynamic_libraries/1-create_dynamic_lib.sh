#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=c89 -fPIC -c *c
gcc -shared -o liball.so *.o
rm *.o
