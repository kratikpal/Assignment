#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    // Upper half of the pattern
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= 2 * i - 1; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half of the pattern
    for (int i = n - 1; i >= 1; --i)
    {
        for (int j = 1; j <= 2 * i - 1; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
