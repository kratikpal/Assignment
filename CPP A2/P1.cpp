#include <iostream>
using namespace std;

class Num
{
    int n;
    int getNum()
    {
        return n;
    }

public:
    Num(int x)
    {
        n = x;
    }
    void printNum()
    {
        cout << "Number is " << getNum() << endl;
    }
};

int main()
{
    int t;
    cout << "Enter a number" << endl;
    cin >> t;
    Num obj(t);
    obj.printNum();
    return 0;
}