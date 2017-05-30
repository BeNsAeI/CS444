#!/bin/sh
mkdir linux-yocto-3.14
cd linux-yocto-3.14
git clone git://git.yoctoproject.org/linux-yocto-3.14 .
cp /scratch/spring2017/files/core-image-lsb-sdk-qemux86.ext3 .
cp /scratch/spring2017/files/config-3.14.26-yocto-qemu .config
cp /scratch/spring2017/10-03/CS444/Homeworks/imports/myMakefile .
cp /scratch/spring2017/10-03/CS444/Homeworks/imports/.gitignore .
rm -rf .git
wget http://people.oregonstate.edu/~Saeedib/patch.sh
wget http://people.oregonstate.edu/~Saeedib/HW2-10-03.patch
chmod u+x,g+x patch.sh
#make -f myMakefile build
