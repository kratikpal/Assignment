#include <iostream>
using namespace std;

// function to reverse an array
void rever(int a[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        swap(a[i], a[n - i - 1]);
    }
}

// function to display an array
void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    rever(a, 5);
    display(a, 5);
    return 0;
}