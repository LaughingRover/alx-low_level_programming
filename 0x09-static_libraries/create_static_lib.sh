#!/bin/bash

# Get all .c files in the current directory
C_FILES=$(find . -maxdepth 1 -type f -name "*.c" -not -name "main.c")

# Iterate through each .c file and generate the corresponding object file
for CFILE in $C_FILES; do
    # Remove the leading './' and trailing '.c' from the filename
    FILENAME="${CFILE#./}"
    OBJFILE="${FILENAME%.c}.o"

    # Compile the .c file into an object file using gcc
    gcc -c "$CFILE" -o "$OBJFILE"

    if [ $? -ne 0 ]; then
        echo "Failed to compile $CFILE"
	exit 1
    fi
done

# Create the static library liball.a from all object files
ar rcs liball.a *.o

# Clean up the temporary object files
rm -f *.o

echo "Static library liball.a created successfully."

