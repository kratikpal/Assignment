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
    friend int sum(demo o1, demo o2);
};

int sum(demo o1, demo o2)
{
    return (o1.a + o2.a);
}

int main()
{
    int x, y;
    cout << "Enter two numbers" << endl;
    cin >> x >> y;
    demo o1(x), o2(y);
    cout << "Sum is " << sum(o1, o2) << endl;
    return 0;
}