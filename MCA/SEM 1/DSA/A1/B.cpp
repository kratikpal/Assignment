#include <iostream>
#include <vector>
using namespace std;

// function to reverse an array by given position
void rever(vector<int> &a, int n)
{
    int i = 0, j = n;
    while (i < j)
    {
        swap(a[i++], a[j--]);
    }
    i = n + 1;
    j = a.size() - 1;
    while (i < j)
    {
        swap(a[i++], a[j--]);
    }
    i = 0;
    j = a.size() - 1;
    while (i < j)
    {
        swap(a[i++], a[j--]);
    }
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    rever(a, 2);
    for (auto i : a)
    {
        cout << i << " ";
    }
    return 0;
}