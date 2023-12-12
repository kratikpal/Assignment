#include <iostream>
using namespace std;

// Declaring N2 because it is used in friend function
class N2;
class N1
{
    int n1;

public:
    friend int findMax(N1, N2);
    N1(int n)
    {
        n1 = n;
    }
};

class N2
{
    int n2;

public:
    friend int findMax(N1, N2);
    N2(int n)
    {
        n2 = n;
    }
};

int findMax(N1 o1, N2 o2)
{
    return (o1.n1 > o2.n2) ? o1.n1 : o2.n2;
}

int main()
{
    int n1, n2;
    cout << "Enter two numbers:";
    cin >> n1 >> n2;
    N1 obj1(n1);
    N2 obj2(n2);
    cout << "Maximum number is: " << findMax(obj1, obj2);
    return 0;
}