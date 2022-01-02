#include <iostream>
using namespace std;

class Num
{
public:
    int n1;
};

class NumChild : public Num
{
public:
    int n2;
};

class NumChild2 : public NumChild
{
public:
    int n3;
};

int main()
{
    NumChild2 obj;
    cout << "Enter three numbers" << endl;
    cin >> obj.n1 >> obj.n2 >> obj.n3;
    cout << "Sum is " << (obj.n1 + obj.n2 + obj.n3) << endl;
    return 0;
}