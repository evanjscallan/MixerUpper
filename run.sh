#!/bin/bash

# Navigate to project directory
cd /path/to/MyCppProject

# Create build directory if not exists
mkdir -p build

# Navigate to build directory
cd build

# Generate build files using CMake
cmake ..

# Build the project using make
make

# Run the executable
./MyCppProject
