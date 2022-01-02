#include <iostream>
using namespace std;

class Demo
{
public:
    Demo()
    {
        cout << "Constructor of parent class called" << endl;
    }
    ~Demo()
    {
        cout << "Distructor of parent class called" << endl;
    }
};

class DemoChild : public Demo
{
public:
    DemoChild()
    {
        cout << "Constructor of child class called" << endl;
    }
    ~DemoChild()
    {
        cout << "Distructor of child class called" << endl;
    }
};

int main()
{
    DemoChild obj;
    return 0;
}