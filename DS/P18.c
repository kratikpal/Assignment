#include <stdio.h>
#include <conio.h>
#define size 5

int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int i = (start - 1);

    for (int j = start; j <= end - 1; j++)
    {

        if (arr[j] < pivot)
        {
            i++;
            int t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
        }
    }
    int t = arr[i + 1];
    arr[i + 1] = arr[end];
    arr[end] = t;
    return (i + 1);
}

void quickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int p = partition(arr, start, end);
        quickSort(arr, start, p - 1);
        quickSort(arr, p + 1, end);
    }
}

int main()
{
    int arr[size], i;
    printf("Enter 5 element of array\n");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    quickSort(arr, 0, size - 1);
    printf("\nAfter sorting array elements are - \n");
    for (i = 0; i < size; i++)
        printf("%d\t" a, arr[i]);
    getch();

    return 0;
}