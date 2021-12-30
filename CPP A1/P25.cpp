#include <iostream>
using namespace std;

class demo
{
    int a, b;

public:
    demo()
    {
        a = 1;
        b = 2;
    }
    void print()
    {
        cout << "Value of a = " << a << endl
             << "Value of b = " << b << endl;
    }
};

int main()
{
    demo d;
    d.print();
    return 0;
}