#!/bin/sh
cat Annuaire.txt | grep -i "^nicolas\tbauer" | tail -n2 | rev | cut -d "	"  -f 2 | rev
