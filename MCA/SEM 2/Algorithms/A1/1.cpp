#include <iostream>
#include <algorithm>
using namespace std;

class SearchingAlgo
{
    int *arr;
    int size;

public:
    SearchingAlgo(int *a, int n)
    {
        arr = a;
        size = n;
    }

    // Linear Search iteratively
    int linearSearchIterative(int key)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == key)
                return i;
        }
        return -1;
    }

    // Linear Search recursively
    int linearSearchRecursive(int key, int i)
    {
        if (i == size)
            return -1;
        if (arr[i] == key)
            return i;
        return linearSearchRecursive(key, i + 1);
    }

    // Binary Search iteratively
    int binarySearchIterative(int key)
    {
        int low = 0;
        int high = size - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[mid] == key)
                return mid;
            else if (arr[mid] < key)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }

    // Binary Search recursively
    int binarySearchRecursive(int key, int low, int high)
    {
        if (low > high)
            return -1;
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            return binarySearchRecursive(key, mid + 1, high);
        else
            return binarySearchRecursive(key, low, mid - 1);
    }
};

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    SearchingAlgo obj(arr, n);
    int key;
    cout << "Enter the key to be searched: ";
    cin >> key;
    cout << "Linear Search Iterative: " << obj.linearSearchIterative(key) << endl;
    cout << "Linear Search Recursive: " << obj.linearSearchRecursive(key, 0) << endl;
    cout << "Binary Search Iterative: " << obj.binarySearchIterative(key) << endl;
    cout << "Binary Search Recursive: " << obj.binarySearchRecursive(key, 0, n - 1) << endl;
    return 0;
}