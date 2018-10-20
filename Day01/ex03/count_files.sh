#!/bin/sh
find . -type d -o -type f | wc -l | cut -c 7-
