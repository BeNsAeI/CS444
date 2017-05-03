#!/bin/bash
while [ `pgrep -x "out.out"` ]
do
	echo ""
	cat tmp.dat
done
