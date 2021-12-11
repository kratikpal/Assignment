#include <iostream>
using namespace std;

class demo
{
    int a, b;

public:
    demo(int x, int y)
    {
        a = x;
        b = y;
    }
    int sum()
    {
        return a + b;
    }
};

int main()
{
    int x, y;
    cout << "Enter two numbers" << endl;
    cin >> x >> y;
    demo o1(x, y);
    cout << "Sum is " << o1.sum() << endl;
    return 0;
}