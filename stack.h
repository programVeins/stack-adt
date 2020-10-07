#ifndef STACK_H
#define STACK_H
#include "dlist.h"

typedef struct stack stack;

struct stack
{
    node* top;
    int count;
};

stack* createStack(node* toBeInitialized);
int isEmpty(stack* givenStack);
int push(stack* givenStack, node* toBePushed);
int pop(stack* givenStack);
node* peek(stack* givenStack);

#endif