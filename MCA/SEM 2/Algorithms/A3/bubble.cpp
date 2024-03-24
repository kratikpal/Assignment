#include <bits/stdc++.h>
#include <windef.h>
#include <winbase.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
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
        bubbleSort(arr, size);
        end_time = GetTickCount();
        DWORD elapsed_time = end_time - start_time;
        cout << "Elapsed Time for size " << size << ": " << elapsed_time << " milliseconds" << endl;
    }
    return 0;
}