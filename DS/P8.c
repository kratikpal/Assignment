#include <stdio.h>
#define max 100
int stack[max], choice = 0, top = -1;

void push()
{
    int val;
    if (top == max - 1)
        printf("Overflow\n");
    else
    {
        printf("Enter the value \n");
        scanf("%d", &val);
        top = top + 1;
        stack[top] = val;
    }
}

void pop()
{
    if (top == -1)
        printf("Underflow");
    else
        top = top - 1;
}
void peek()
{

    if (top == -1)
    {
        printf("Stack is empty");
        return;
    }
    printf("%d\n", stack[top]);
}
void main()
{
    while (choice != 4)
    {
        printf("Chose one from the below options\n");
        printf(" 1 Push\n 2 Pop\n 3 Show Top\n 4 Exit\n");
        printf("Enter your choice \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            peek();
            break;
        }
        case 4:
        {
            printf("Exiting\n");
            break;
        }
        default:

        {
            printf("Please Enter valid choice\n ");
        }
        }
    }
}
