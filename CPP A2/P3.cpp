// Program to demonstrate static member function
#include <iostream>
using namespace std;

class Num
{
    static int n;

public:
    Num(int x)
    {
        n = x;
    }
    static void display()
    {
        cout << "Number is " << n << endl;
    }
};

int Num::n;

int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    Num obj(n);
    Num::display();

    return 0;
}