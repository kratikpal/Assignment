#include <iostream>
using namespace std;

class Parent
{
public:
    virtual void print()
    {
        cout << "Function of Parent class called" << endl;
    }
};
class Child : public Parent
{
public:
    void print()
    {
        cout << "Function of Child class called" << endl;
    }
};

int main()
{
    Parent *ptr;
    Child obj;
    ptr = &obj;
    ptr->print();
    return 0;
}