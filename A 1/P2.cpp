// Program to demonstrate scope resolution operator
#include <iostream>
using namespace std;

class demo
{
public:
    void print();
};

void demo::print() //  using ::
{
    cout << "Function print is called" << endl;
}

int main()
{
    demo d;
    d.print();

    return 0;
}