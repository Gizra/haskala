#!/bin/sh
DIRECTORY=./webdrivercss

if [ -d "$DIRECTORY" ]; then
  for i in $DIRECTORY/*
    do
      bash $TRAVIS_BUILD_DIR/imgur $i
    done
else
  echo "No images were found"
fi

