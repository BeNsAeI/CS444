#!/bin/sh
cp /scratch/spring2017/files/core-image-lsb-sdk-qemux86.ext3 .
git am --signoff < HW2-10-03.patch
cp /scratch/spring2017/files/config-3.14.26-yocto-qemu .config
