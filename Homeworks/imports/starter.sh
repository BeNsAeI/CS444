#!/bin/sh
mkdir ../linux-yocto-3.14
cd ../linux-yocto-3.14
git clone git://git.yoctoproject.org/linux-yocto-3.14 .
git checkout tags/v3.14.26
git branch
cp /scratch/spring2017/files/core-image-lsb-sdk-qemux86.ext3 .
cp /scratch/spring2017/files/config-3.14.26-yocto-qemu .config
