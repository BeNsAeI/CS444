#!/bin/bash
input="log.txt"
while IFS= read -r var
do
  echo $(date -d @$var +'%Y-%m-%d %H:%M:%S')
done < "$input"
