#include <iostream>
using namespace std;

inline int largest(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int main()
{
    int a, b;
    cout << "Enter two number" << endl;
    cin >> a >> b;
    cout << "largest number is " << largest(a, b) << endl;
    return 0;
}