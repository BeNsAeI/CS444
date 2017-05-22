#!/bin/sh
#rm ../../.git/rebase-apply -rf
#cp /scratch/spring2017/files/core-image-lsb-sdk-qemux86.ext3 .
#git am --signoff < HW2-10-03.patch
wget http://people.oregonstate.edu/~Saeedib/HW2-10-03.patch
clear
git apply HW2-10-03.patch
cp /scratch/spring2017/10-03/CS444/Homeworks/imports/myMakefile .
#cp /scratch/spring2017/files/config-3.14.26-yocto-qemu .config
