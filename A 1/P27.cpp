#include <iostream>
using namespace std;

class number
{
    int n;

public:
    number(int x)
    {
        n = x;
    }
    number(number &obj)
    {
        n = obj.n;
    }
    int getNum()
    {
        return n;
    }
};

int main()
{
    int x;
    cout << "Enter a number" << endl;
    cin >> x;
    number n1(x);
    number n2(n1);
    cout << "Value copied by copy constructor is " << n2.getNum() << endl;
    return 0;
}