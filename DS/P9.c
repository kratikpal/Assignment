#include <stdio.h>
#include <conio.h>
#define max 100
int queue[max], front = -1, rear = -1;

void enqueue()
{
    int n;
    if (rear == max - 1)
    {
        printf("Queue Overflow \n");
        return;
    }
    if (front == -1)
        front = front + 1;
    printf("Enter element\n");
    scanf("%d", &n);
    rear = rear + 1;
    queue[rear] = n;
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow \n");
        return;
    }
    printf("Deleted Element is : %d\n", queue[front]);
    front = front + 1;
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

        printf("%d ", queue[i]);
    printf("\n");
}

void main()
{
    int choice = 0;
    while (choice != 4)
    {
        printf("1 Insert\n2  Delete\n3 Display\n4 Exit\n");
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