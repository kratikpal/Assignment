#include <iostream>
using namespace std;

class number
{
    int n;

public:
    number(int a = 0)
    {
        cout << "Constructor called" << endl;
        n = a;
    }
    ~number()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    number n;
    return 0;
}