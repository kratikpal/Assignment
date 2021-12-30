#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter the number" << endl;
    cin >> n;
    while (n)
    {
        sum += (n % 10);
        n /= 10;
    }
    cout << "Sum of all digits of the number is " << sum << endl;
    return 0;
}