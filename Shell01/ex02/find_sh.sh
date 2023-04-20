#!/bin/sh
find "$PWD" -iname "*.sh" -execdir basename {} .sh ';'
