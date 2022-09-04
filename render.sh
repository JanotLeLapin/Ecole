#!/bin/bash

FILES=$(find . -type f -name '*.md') # Files to render

mkdir -p pages # Output directory
for f in $FILES
do
    path=$(dirname $f) # File path
    file=$(basename $f) # File without path

    if [ $file == 'README.md' ];
    then
        name='index'
    else
        name=${file%.*}
    fi

    echo Rendering $path/$name
    mkdir -p pages/$path

    pandoc --mathjax -t html $f -s -o pages/$path/$name.html --metadata title=$name
done

