#include <iostream>
using namespace std;

class Num
{
    int n;

public:
    Num(int x)
    {
        n = x;
    }
    void operator++()
    {
        n++;
    }
    int getNum()
    {
        return n;
    }
};

int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    Num obj(n);
    ++obj;
    cout << "After increment number is " << obj.getNum() << endl;
    return 0;
}