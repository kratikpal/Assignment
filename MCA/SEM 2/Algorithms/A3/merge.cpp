#include <bits/stdc++.h>
#include <windef.h>
#include <winbase.h>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    vector<int> temp;
    int i = low, j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }
    while (i <= mid)
        temp.push_back(arr[i++]);
    while (j <= high)
        temp.push_back(arr[j++]);
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void mergeSort(int arr[], int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
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
        mergeSort(arr, 0, size - 1);
        end_time = GetTickCount();
        DWORD elapsed_time = end_time - start_time;
        cout << "Elapsed Time for size " << size << ": " << elapsed_time << " milliseconds" << endl;
    }
    return 0;
}