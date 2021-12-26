#include <stdio.h>
#include <conio.h>
#define max 3
int cqueue[max], front = -1, rear = -1;

void enqueue()
{
    if ((rear + 1) % max == front)
    {
        printf("Queue overflow\n");
        return;
    }
    if (front == -1)
        front++;
    rear = (rear + 1) % max;
    printf("Enter element\n");
    scanf("%d", &cqueue[rear]);
}

void dequeue()
{
    if (front == rear)
    {
        printf("Queue is empty\n");
        return;
    }
    front = (front + 1) % max;
    printf("Element removed\n");
}

void display()
{
    int i;
    if (front == -1)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue is :-\n");
    for (i = front; i <= rear; i++)
        printf("%d ", cqueue[i]);
    printf("\n");
}

void main()
{
    int choice;
    // clrscr();
    printf("1 Insert\n2 Delete\n3 Display\n4 Exit\n");
    while (choice != 4)
    {
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting\n");
            break;

        default:
            printf("Enter a corre\n");
            break;
        }
    }
}