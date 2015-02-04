#!/bin/bash

# Test PhantomCSS
cd phantomcss

js_files="*.js"

for js_file in $js_files
do
  casperjs test $js_file
done
cd -

# Test Behat
cd behat
./bin/behat --tags=~wip
cd -
