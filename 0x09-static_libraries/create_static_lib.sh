#!/bin/bash
# This script creates a static library from all .c files in the current directory.

# Compile all .c files in the current directory
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create the static library liball.a
ar -rc liball.a *.o

# Index the static library
ranlib liball.a

# Clean up the object files
rm -f *.o

# Display a success message
echo "Static library liball.a created successfully."

