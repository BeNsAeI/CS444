all:
	gcc mutualExclusion.c -std=c99 -pthread -o mutualExclusion.out
	./mutualExclusion.out 2 2 2
debug:
	gcc mutualExclusion.c -std=c99 -pthread -g
	gdb ./a.out 2 2 2
