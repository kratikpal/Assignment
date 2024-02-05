// Program to remove duplicate ele,ent from array
#include <iostream>
#include <algorithm>
using namespace std;

// function to remove duplicate
void removeDup(int arr[], int n)
{
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            for (int j = i + 1; j < n; j++)
            {
                arr[j] = arr[j + 1];
            }
            n--;
            i--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {1, 2, 2, 0, 5};
    removeDup(arr, 5);
    return 0;
}