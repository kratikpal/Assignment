#include <iostream>
using namespace std;

int area(int a = 1, int b = 1)
{
    return a * b;
}

int main()
{
    int a, b;
    cout << "Enter sides of rectangle or enter 0 to run with default arguments" << endl;
    cin >> a;
    if (a == 0)
    {
        cout << "Area of rectangle " << area() << endl;
    }
    else
    {
        cin >> b;
        cout << "Area of rectangle " << area(a, b) << endl;
    }
    return 0;
}