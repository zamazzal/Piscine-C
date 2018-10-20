#!/bin/sh
touch -A -01 bomb.txt | stat bomb.txt | cut -d " " -f 12
