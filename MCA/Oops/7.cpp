#include <iostream>
using namespace std;

class Number
{
    int n;

public:
    Number(int n)
    {
        this->n = n;
    }

    // Copy constructor
    Number(Number &obj)
    {
        n = obj.n;
    }

    void print()
    {
        cout << n << endl;
    }
};

int main()
{
    Number obj1(10);
    Number obj2(obj1);
    obj2.print();
    return 0;
}