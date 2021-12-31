#include <iostream>
using namespace std;

class Num
{
    int n;

public:
    Num(int x = 0)
    {
        n = x;
    }

    int getNum()
    {
        return n;
    }

    friend int operator*(Num &o1, Num &o2);
};

int operator*(Num &o1, Num &o2)
{
    return o1.n * o2.n;
}

int main()
{
    int n1, n2;
    cout << "Enter two number" << endl;
    cin >> n1 >> n2;
    Num o1(n1), o2(n2);
    Num ans(o1 * o2);
    cout << "Multiplication is " << ans.getNum() << endl;
    return 0;
}