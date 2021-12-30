#include <iostream>
using namespace std;

class prime
{
public:
    int a;

    prime(int n)
    {
        a = n;
    }

    bool checkPrime();
};

bool prime ::checkPrime()
{
    if (a <= 1)
        return false;
    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cout << "enter a number" << endl;
    cin >> n;
    prime p(n);
    if (p.checkPrime())
        cout << "Number is prime" << endl;
    else
        cout << "Number is not prime" << endl;

    return 0;
}