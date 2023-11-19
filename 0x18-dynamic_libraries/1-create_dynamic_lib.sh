#!/bin/bash

# Compile all .c files into object files
gcc -c -fPIC *.c

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up the temporary object files
rm *.o
