// Program to sort a given array
#include <iostream>
using namespace std;

// Sorts an array of integers using the bubble sort algorithm.
void bSort(int arr[], int n)
{
    int count = 0;
    while (count < n)
    {
        for (int i = 0; i < n - count; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
        count++;
    }
}

int main()
{
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    bSort(arr, 10);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}