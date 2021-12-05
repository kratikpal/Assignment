// Skip multiple of 3 upto n using continue statement
#include <iostream>
using namespace std;

int main()
{
    int t;
    cout << "Enter a number" << endl;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        if (i % 3 == 0)
            continue;
        cout << i << endl;
    }
    return 0;
}