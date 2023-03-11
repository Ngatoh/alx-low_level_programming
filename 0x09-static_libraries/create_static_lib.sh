#!/bin/bash

# Compile each C file into an object file
gcc -Wall -Werror -Wextra -pedantic -c -Wno-unused-parameter *.c

# Create the static library archive file
ar -rc liball.a *.o

# Index the archive for efficient symbol lookup
ranlib liball.a

# Clean up the object files
rm *.o
