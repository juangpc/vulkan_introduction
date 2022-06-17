#!/bin/bash

#clean 
rm -fr build/
rm -fr out/

cmake -B build -S .
cmake --build build -v

