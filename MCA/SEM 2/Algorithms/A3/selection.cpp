#include <bits/stdc++.h>
#include <windef.h>
#include <winbase.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        swap(arr[min_idx], arr[i]);
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
        selectionSort(arr, size);
        end_time = GetTickCount();
        DWORD elapsed_time = end_time - start_time;
        cout << "Elapsed Time for size " << size << ": " << elapsed_time << " milliseconds" << endl;
    }

    return 0;
}