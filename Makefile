#Makefile

stack:	main.o stack.o dlist.o
	gcc main.c stack.c dlist.c -o stack

clean:
	rm *.o stack