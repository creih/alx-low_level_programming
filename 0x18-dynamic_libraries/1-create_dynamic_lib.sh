#!/bin/bash

for source_file in *.c; do
    object_file="${source_file%.c}.o"
    gcc -c -fPIC "$source_file" -o "$object_file"
    if [ $? -ne 0 ]; then
        echo "Compilation failed for $source_file"
        exit 1
    fi
done

gcc -shared -o liball.so *.o
if [ $? -eq 0 ]; then
    echo "Dynamic library liball.so created successfully."
else
    echo "Failed to create the dynamic library."
fi
rm -f *.o
