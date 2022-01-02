#include <iostream>
using namespace std;

template <class T>
class Num
{
    T n;

public:
    Num(T x) : n(x) {}
    T getNum()
    {
        return n;
    }
};

int main()
{
    int n;
    double d;
    cout << "Enter a Integer" << endl;
    cin >> n;
    cout << "Enter a Decimal Numbers" << endl;
    cin >> d;
    Num<int> o1(n);
    Num<double> o2(d);
    cout << "Integer is " << o1.getNum() << endl
         << "Decimal is " << o2.getNum() << endl;
    return 0;
}