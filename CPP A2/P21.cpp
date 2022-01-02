#include <iostream>
using namespace std;

template <typename T>
T sum(T x, T y)
{
    return x + y;
}

int main()
{
    int n1, n2;
    double d1, d2;
    cout << "Enter two Integer" << endl;
    cin >> n1 >> n2;
    cout << "Sum is " << sum<int>(n1, n2) << endl;
    cout << "Enter two Decimal Numbers" << endl;
    cin >> d1 >> d2;
    cout << "Sum is " << sum<double>(d1, d2) << endl;
    return 0;
}