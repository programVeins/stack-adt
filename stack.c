#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#define MAKESTACK (stack*) malloc(sizeof(stack))

stack* createStack(node* toBeInitialized)
{
    stack* thisStack = MAKESTACK;
    thisStack->count = 1;
    thisStack->top = toBeInitialized;
    return thisStack;
}

int isEmpty(stack* givenStack)
{
    return (givenStack->count == 0);
}

int push(stack* givenStack, node* toBePushed)
{
    if(!isEmpty(givenStack))
    {
        givenStack->top->next = toBePushed;
        toBePushed->prev = givenStack->top;
    }
    givenStack->top = toBePushed;
    givenStack->count++;
    puts("\nPushed successfully");
    return 0;
}

int pop(stack* givenStack)
{
    if(isEmpty(givenStack))
    {
        puts("\nEmpty stack cannot be popped");
        return -1;
    }
    node* tempNode = givenStack->top;
    if(tempNode->prev != NULL)
    {
        tempNode->prev->next = NULL;
        givenStack->top = tempNode->prev;
    }
    else
    {
        givenStack->top = NULL;
    }
    
    givenStack->count--;
    printf("\n[%d] was popped from the stack!\n", tempNode->data);
    free(tempNode);
    return 0;
}

node* peek(stack* givenStack)
{
    if(isEmpty(givenStack))
    {
        puts("\nStack is empty!");
        return NULL;
    }
    return givenStack->top;
}