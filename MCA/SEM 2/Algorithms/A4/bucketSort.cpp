#include <bits/stdc++.h>
using namespace std;

// insertion sort
void insertionSort(vector<double> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        double key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// bucket sort
void bucketSort(vector<double> &arr, int n)
{
    vector<double> b[n];

    for (int i = 0; i < n; i++)
    {
        int bi = n * arr[i];
        b[bi].push_back(arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        insertionSort(b[i], b[i].size());
    }

    int index = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < b[i].size(); j++)
        {
            arr[index++] = b[i][j];
        }
    }
}

int main()
{
    vector<double> arr = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};
    cout << "Before Sorting: ";
    for (auto x : arr)
        cout << x << " ";
    cout << endl;
    bucketSort(arr, arr.size());
    cout << "After Sorting: ";
    for (auto x : arr)
        cout << x << " ";
    return 0;
}