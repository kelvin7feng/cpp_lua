#!/bin/bash
parent_path=`pwd`
mkdir -p build
cd build
current_path=`pwd`
cmake -B${current_path} -H${parent_path}
make
