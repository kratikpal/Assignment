#include <iostream>
#define ll long long int
using namespace std;

void demo(const int a)
{
    cout << "constant argument is " << a << endl;
}

int main()
{
    int t;
    cout << "Enter a number" << endl;
    cin >> t;
    demo(t);
    return 0;
}