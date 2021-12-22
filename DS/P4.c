#include <stdio.h>
#include <conio.h>
int a[3], n = 3, count = 0;

void insert()
{
    int key;
    if (count == n)
    {
        printf("Array is full\n");
        return;
    }
    printf("Enter a number\n");
    scanf("%d", &key);
    a[count] = key;
    count++;
}

void deletion()
{
    int i, j, check = 0, key;
    if (count == 0)
    {
        printf("Array is empty\n");
        return;
    }
    printf("Enter a number\n");
    scanf("%d", &key);
    for (i = 0; i < count; i++)
    {
        if (a[i] == key)
        {
            check = 1;
            for (j = i; j < (count - 1); j++)
            {
                a[j] = a[j + 1];
            }
            count--;
        }
        if (check)
        {
            printf("Element deleted\n");
            break;
        }
    }
    if (check == 0)
        printf("Element not found\n");
}

void display()
{
    int i;
    if (count == 0)
    {
        printf("Array is empty\n");
        return;
    }
    for (i = 0; i < count; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void main()
{
    // clrscr();
    int choice = 0;
    while (choice != 4)
    {
        printf("1 Insert\n2 Delete\n3 Display\n4 Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            deletion();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting\n");
            break;
        default:
            printf("Enter a valid choice\n");
            break;
        }
    }
}