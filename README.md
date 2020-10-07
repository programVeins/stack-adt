# Stack ADT - Using Doubly Linked List

### Files included
* main.c
* dlist.c
* dlist.h
* stack.c
* stack.h
* Makefile

### Compilation

If you are using UNIX/Linux, use `make` to compile and `make clean` to clean up after running the program.

Please use `gcc main.c stack.c dlist.c -o stack` if you are using gcc compiler (other than linux)

Run with ./stack 

### Program Menu

The program offers a context menu in the beginning. Press 1 to initiate a new stack. Then use the other options to operate on it. Press 7 in the menu to quit the program. Press 6 at any  point to view the stack's visual representation.

### Functions implemented

* createStack()
* isEmpty()
* push()
* pop()
* peek()