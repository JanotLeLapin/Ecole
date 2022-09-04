#!/bin/sh

FILES=$(find . -type f -name '*.hs') # Files to compile

mkdir -p build
for f in $FILES
do
    parent=build/$(dirname $f) # File directory
    path=build/${f%.*} # File path
    name=$(basename $f) # File name

    echo $path
    mkdir -p $path
    ghc -outputdir $path -o $path.out $f
done

