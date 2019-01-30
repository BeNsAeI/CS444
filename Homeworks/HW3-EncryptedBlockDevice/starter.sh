#!/bin/sh
git clone git://git.yoctoproject.org/linux-yocto-3.14 linux-yocto-3.14
cd linux-yocto-3.14
git checkout tags/v3.14.26
git checkout -b HW3
cp /scratch/spring2017/files/core-image-lsb-sdk-qemux86.ext3 .
cp /scratch/spring2017/files/config-3.14.26-yocto-qemu .config
#cp /scratch/spring2017/10-03/CS444/Homeworks/imports/myMakefile .
#cp /scratch/spring2017/10-03/CS444/Homeworks/imports/.gitignore .
#cp /scratch/spring2017/10-03/CS444/Homeworks/imports/patch.sh .
#cp /scratch/spring2017/10-03/CS444/Homeworks/imports/HW2-10-03.patch .
#wget http://people.oregonstate.edu/~Saeedib/HW2-10-03.patch
#make -f myMakefile build
