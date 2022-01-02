#include <iostream>
using namespace std;

class Parent
{
public:
    virtual void fun() = 0;
};
class Child : public Parent
{
public:
    void fun()
    {
        cout << "Function called" << endl;
    }
};

int main()
{
    Child obj;
    obj.fun();
    return 0;
}