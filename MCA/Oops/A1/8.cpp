#include <iostream>
using namespace std;

class Num
{
    int n;

public:
    Num(int n)
    {
        this->n = n;
    }
    void display()
    {
        cout << n << endl;
    }
};

int main()
{
    Num *obj = new Num(10);
    obj->display();
    return 0;
}