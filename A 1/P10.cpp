#include <iostream>
using namespace std;

int main()
{
    int t = 1;
    cout << "Enter a number" << endl;
    while (t)
    {
        cin >> t;
        cout << "Entered number is " << t << endl;
        cout << "Enter 0 to break the loop" << endl;
        if (t == 0)
            break;
    }
    return 0;
}