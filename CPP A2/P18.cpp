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
};

int main()
{
    int a;
    cout << "Enter a number" << endl;
    cin >> a;
    Num obj(a);
    Num *ptr = &obj;
    cout << "Number is " << ptr->getNum() << endl;
    return 0;
}