#!/bin/bash
gcc -c *.c

ar rcs liball.a *.o

echo "Static library liball.a created successfully!"
