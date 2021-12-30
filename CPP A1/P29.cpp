#include <iostream>
using namespace std;

class name
{
    char *p;

public:
    name()
    {
        p = new char[10];
        p = "kratik";
    }
    void display()
    {
        cout << "Name is " << p << endl;
    }
};

int main()
{
    name n;
    n.display();
    return 0;
}