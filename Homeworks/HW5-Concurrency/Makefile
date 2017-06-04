all:
	gcc main.c kbhit.c -o out -std=c99 -pthread
	./out

debug:
	gcc main.c kbhit.c -o out -std=c99 -pthread -g
	gdb ./out.out
