#include <stdio.h>
#include "stack.h"

int main()
{
    int mainChoice, tempData;
    stack* myStack;
    node* tempNode;
    while(1)
    {
        puts("\nEnter an option:");
        puts("1. Create a new stack");
        puts("2. Check if stack is empty");
        puts("3. Push: Add element to top of stack");
        puts("4. Pop: Remove the top element from stack");
        puts("5. Peek: Look at the top element of stack");
        puts("6. Display stack");
        puts("7. Exit\n");
        scanf("%d", &mainChoice);
        switch (mainChoice)
        {
        case 7:
            return 0;
        case 1:
            puts("\nEnter initial data for stack:");
            scanf("%d", &tempData);
            myStack = createStack(create(tempData));
            break;
        case 2:
            if(myStack == NULL)
            {
                puts("\nStack not initialized");
                break;
            }
            if(isEmpty(myStack))
                puts("\nStack is empty");
            else
            {
                puts("\nStack is not empty");
            }
            break;
        case 3:
            if(myStack == NULL)
            {
                puts("\nStack not initialized");
                break;
            }
            puts("\nEnter data to be added to stack:");
            scanf("%d", &tempData);
            push(myStack, create(tempData));
            break;
        case 4:
            if(myStack == NULL)
            {
                puts("\nStack not initialized");
                break;
            }
            pop(myStack);
            break;
        case 5:
            if(myStack == NULL)
            {
                puts("\nStack not initialized");
                break;
            }
            tempNode = peek(myStack);
            if(tempNode != NULL)
                printf("\nTop Data is %d\n", tempNode->data);
            break;
        case 6:
            if(myStack == NULL)
            {
                puts("\nStack not initialized");
                break;
            }
            if(isEmpty(myStack))
            {
                puts("\n|     |");
                puts("|_____|");
                break;
            }
            tempNode = myStack->top;
            while(tempNode->prev != NULL)
            {
                if(tempNode == myStack->top)
                    printf("\n");
                printf("| [%d] |\n", tempNode->data);
                tempNode = tempNode->prev;
            }
            printf("| [%d] |\n", tempNode->data);
            puts("|_____|");
            break;
        default:
            break;
        }
    }
    return 0;
}