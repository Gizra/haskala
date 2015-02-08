#!/bin/bash

# Some variable definitions
BOLD=`tput bold`
NORMAL=`tput sgr0`
GREEN='\e[0;32m'

PANTHEON_ALIAS="@haskala.dev"

# Execute Pantheon install outside of the Pantheon Dir.
drush $PANTHEON_ALIAS sql-drop -y

drush $PANTHEON_ALIAS si -y haskala --account-pass=admin

# Migrate all the data.
drush $PANTHEON_ALIAS mi --all --user=1 --strict=0
