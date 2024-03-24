#include <bits/stdc++.h>
#include <windef.h>
#include <winbase.h>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1, j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high)
            i++;
        while (arr[j] > pivot && j >= low)
            j--;
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pIdx = partition(arr, low, high);
        quickSort(arr, low, pIdx - 1);
        quickSort(arr, pIdx + 1, high);
    }
}

int main()
{
    DWORD start_time, end_time;
    const int sizes[] = {10, 100, 1000, 10000, 100000};
    for (int size : sizes)
    {
        int arr[size];
        // Populate array with random numbers
        for (int i = 0; i < size; ++i)
        {
            arr[i] = rand() % 1000;
        }
        start_time = GetTickCount();
        quickSort(arr, 0, size - 1);
        end_time = GetTickCount();
        DWORD elapsed_time = end_time - start_time;
        cout << "Elapsed Time for size " << size << ": " << elapsed_time << " milliseconds" << endl;
    }
    return 0;
}