#include <iostream>
using namespace std;

double area(double r)
{
    return (3.14 * r * r);
}

double area(double l, double b)
{
    return (l * b);
}

double area(double a, double b, double h)
{
    return (a * b * h);
}

int main()
{
    int a, b;
    cout << "Enter radius of circle" << endl;
    cin >> a;
    cout << "Area of circle = " << area(a) << endl;
    cout << "Enter length and breadth of rectangle" << endl;
    cin >> a >> b;
    cout << "Area of rectangle = " << area(a, b) << endl;
    cout << "Enter base and height of triangle" << endl;
    cin >> a >> b;
    cout << "Area of triangle = " << area(0.5, a, b) << endl;
    return 0;
}