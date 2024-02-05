#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    // Upper part of the pattern
    for (int i = 1; i <= n; i += 2)
    {
        // Print spaces
        for (int j = 0; j < (n - i) / 2; ++j)
        {
            cout << " ";
        }

        // Print stars
        for (int j = 0; j < i; ++j)
        {
            cout << "*";
        }

        cout << endl;
    }

    // Lower part of the pattern
    for (int i = n - 2; i >= 1; i -= 2)
    {
        // Print spaces
        for (int j = 0; j < (n - i) / 2; ++j)
        {
            cout << " ";
        }

        // Print stars
        for (int j = 0; j < i; ++j)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
