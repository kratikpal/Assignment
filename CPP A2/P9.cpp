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

    Num operator+(Num &obj)
    {
        Num temp;
        temp.n = n + obj.n;
        return temp;
    }

    int getNum()
    {
        return n;
    }
};

int main()
{
    int n1, n2;
    cout << "Enter two number" << endl;
    cin >> n1 >> n2;
    Num o1(n1), o2(n2), sum;
    sum = o1 + o2;
    cout << "Sum is " << sum.getNum() << endl;
    return 0;
}