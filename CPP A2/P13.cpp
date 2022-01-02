#include <iostream>
using namespace std;

class Num1
{
public:
    int n1;
};

class Num2
{
public:
    int n2;
};

class NumChild : public Num1, public Num2
{
public:
    void getNum()
    {
        cout << "Enter two numbers" << endl;
        cin >> n1 >> n2;
    }
    int sum()
    {
        return n1 + n2;
    }
};

int main()
{
    NumChild obj;
    obj.getNum();
    cout << "Sum is " << obj.sum() << endl;
    return 0;
}