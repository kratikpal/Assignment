#include <iostream>
using namespace std;

class demo
{
    int a;

public:
    demo(int n)
    {
        a = n;
    }
    int get()
    {
        return a;
    }
};

int main()
{
    int x, y;
    cout << "Enter two numbers" << endl;
    cin >> x >> y;
    demo d1(x);        // Implicit call
    demo d2 = demo(y); // Explicit call
    cout << "Value set by Implicit call is " << d1.get() << endl;
    cout << "Value set by Explicit call is " << d2.get() << endl;
    return 0;
}