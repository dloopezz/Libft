#!/bin/bash
make fclean
rm a.out
rm .DS_Store
git add --all
git commit -m "."
git push
