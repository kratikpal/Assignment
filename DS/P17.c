#include <stdio.h>
#include <conio.h>
#define size 5

void insertionSort(int *arr)
{
    int i, j, key;
    for (i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void main()
{
    // clrscr();
    int arr[size], key, i;
    printf("Enter 5 element of array\n");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    insertionSort(arr);
    printf("After sort element of array are\n");
    for (i = 0; i < size; i++)
        printf("%d\t", arr[i]);
    getch();
}