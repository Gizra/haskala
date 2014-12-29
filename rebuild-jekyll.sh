#!/bin/bash

cd jekyll
grunt build

cd ..
rm -rf haskala/libraries/haskala
mkdir haskala/libraries/haskala
rsync -avz --exclude '.git' jekyll/dist/ haskala/libraries/haskala
