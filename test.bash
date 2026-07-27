#!/bin/bash

# Script global pour tester un outil
SCRIPT="$PWD/../testTool.bash"

# Outil à tester (voir testTool.bash pour plus d'infos)
TOOL=$1

# Itère sur tous les éléments
for i in $(ls);
do
   $SCRIPT $i $TOOL alzheimers
done

