#include <iostream>
using namespace std;

class number
{
    int n;

public:
    number(int x = 0)
    {
        n = x;
    }
    int getNum()
    {
        return n;
    }
};

int main()
{
    number n;
    cout << "Default value of n is " << n.getNum() << endl;
    return 0;
}