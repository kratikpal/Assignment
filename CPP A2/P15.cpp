#include <iostream>
using namespace std;

class Num
{
public:
    int n;
};

class NumChild1 : public virtual Num
{
};

class NumChild2 : public virtual Num
{
};

class NumChild3 : public NumChild1, public NumChild2
{
public:
    void display()
    {
        cout << "Number is " << n << endl;
    }
};

int main()
{
    NumChild3 obj;
    cout << "Enter a numbers" << endl;
    cin >> obj.n;
    obj.display();
    return 0;
}