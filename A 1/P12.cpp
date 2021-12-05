#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter year" << endl;
    cin >> n;
    if (n % 4 == 0)
    {
        cout << n << " is a leap year" << endl;
        exit(0);
    }
    else
        goto not_leap;

not_leap:
    cout << n << " is not a leap year" << endl;
    return 0;
}