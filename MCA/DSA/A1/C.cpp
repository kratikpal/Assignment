#include <iostream>
#include <algorithm>
using namespace std;

// function to find union
void uni(int arr1[], int arr2[], int m, int n)
{
    sort(arr1, arr1 + m);
    sort(arr2, arr2 + n);
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";
        else if (arr2[j] < arr1[i])
            cout << arr2[j++] << " ";
        else
        {
            cout << arr2[j++] << " ";
            i++;
        }
    }
    while (i < m)
        cout << arr1[i++] << " ";
    while (j < n)
        cout << arr2[j++] << " ";
}

int main()
{
    int arr1[5] = {1, 5, 2, 9, 7};
    int arr2[5] = {3, 5, 6, 7, 8};
    uni(arr1, arr2, 5, 5);
    return 0;
}