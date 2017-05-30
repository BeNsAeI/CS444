cmd_lib/raid6/int4.c := awk -f/scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/lib/raid6/unroll.awk -vN=4 < lib/raid6/int.uc > lib/raid6/int4.c || ( rm -f lib/raid6/int4.c && exit 1 )
