// Program to demonstrate conditional operator
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter a number" << endl;
    cin >> n;
    // Use of conditional operator
    (n % 2 == 0) ? cout << n << " is even" << endl : cout << n << " is odd" << endl;
    return 0;
}