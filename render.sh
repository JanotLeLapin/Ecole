#!/bin/sh

FILES=$(find . -type f -name '*.md' ! -name 'REAMDE.md') # Files to render

mkdir -p pages # Output directory
for f in $FILES
do
    path=$(dirname $f) # File path
    file=$(basename $f) # File without path
    name=${file%%.*} # Filename without extension

    echo Rendering $name
    if [ $path != '.' ]; then
        mkdir -p pages/$path
    fi

    pandoc --mathjax -t html $f -s -o ./pages/${f%.*}.html --metadata title=$name
done

echo Rendering README
pandoc --mathjax -t html ./README.md -s -o ./pages/index.html --metadata title='Mes Cours'

