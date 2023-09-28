#!/bin/bash

for file in `ls {0..20}-*c 2>/dev/null`
do
	echo '#include "'$file'"'
done
