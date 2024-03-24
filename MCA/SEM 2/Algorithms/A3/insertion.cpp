#include <bits/stdc++.h>
#include <windef.h>
#include <winbase.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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
        insertionSort(arr, size);
        end_time = GetTickCount();
        DWORD elapsed_time = end_time - start_time;
        cout << "Elapsed Time for size " << size << ": " << elapsed_time << " milliseconds" << endl;
    }
    return 0;
}