#!/bin/sh
rm -rf t1lib.h
files=$(find ./ | grep "\.h")

cat $files > t1lib.h
