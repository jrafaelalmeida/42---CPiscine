#!/bin/sh
ls -1 | awk 'NR % 2 == 1'
