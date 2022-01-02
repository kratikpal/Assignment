#include <iostream>
using namespace std;

class Num
{
public:
    int n1, n2;
};

class Sum : public Num
{
public:
    int sum()
    {
        return n1 + n2;
    }
};

class Multiplication : public Num
{
public:
    int multi()
    {
        return n1 * n2;
    }
};

int main()
{
    Sum obj1;
    Multiplication obj2;
    cout << "Enter two numbers" << endl;
    cin >> obj1.n1 >> obj1.n2;
    obj2.n1 = obj1.n1;
    obj2.n2 = obj1.n2;
    cout << "Sum is " << obj1.sum() << endl;
    cout << "Multiplication is " << obj2.multi() << endl;
    return 0;
}