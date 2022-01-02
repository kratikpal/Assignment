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

int main()
{
    NumChild obj;
    cout << "Enter two numbers" << endl;
    cin >> obj.n1 >> obj.n2;
    cout << "Sum is " << (obj.n1 + obj.n2) << endl;
    return 0;
}