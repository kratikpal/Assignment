#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "After swaping value of x = " << x << " and value of y = " << y << endl;
    return;
}
int main()
{
    int x, y;
    cout << "Enter two numbers" << endl;
    cin >> x >> y;
    cout << "Before swaping value of x = " << x << " and value of y = " << y << endl;
    swap(x, y);
    return 0;
}