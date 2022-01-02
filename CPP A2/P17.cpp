#include <iostream>
using namespace std;

class Demo
{
public:
    class Nested
    {
    public:
        int n;
        Nested(int x)
        {
            n = x;
        }
        int getNum()
        {
            return n;
        }
    };
};

int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    Demo::Nested obj(n);
    cout << "Number is " << obj.getNum() << endl;
    return 0;
}