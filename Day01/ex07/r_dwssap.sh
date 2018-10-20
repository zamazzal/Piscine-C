#!/bin/sh
cat /etc/passwd | sed '/#/d' | sed -n 'n;p' | cut -d : -f 1 | rev | sort -r | awk 'ORS=", "' | cut -d, -f $FT_LINE1-$FT_LINE2 | tr "\n" "." | cut -c 2- | tr -d '\n'
