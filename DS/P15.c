#include <stdio.h>
#include <conio.h>
#define size 5

void search(int arr[], int key)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            printf("Element found at position %d\n", i + 1);
            return;
        }
    }
    printf("Element not found/n");
    return;
}

void main()
{
    // clrscr();
    int arr[size], key, i;
    printf("Enter 5 element of array\n");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    printf("Enter element you want to search\n");
    scanf("%d", &key);
    search(arr, key);
    getch();
}