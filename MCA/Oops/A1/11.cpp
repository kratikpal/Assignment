#include <iostream>
using namespace std;

class Vector
{
    int x, y;

public:
    Vector() {}
    Vector(int a, int b)
    {
        x = a;
        y = b;
    }

    friend Vector operator*(int, Vector &);
    friend std::ostream &operator<<(std::ostream &, Vector &);
    friend std::istream &operator>>(std::istream &, Vector &);
};

Vector operator*(int a, Vector &v)
{
    return Vector(a * v.x, a * v.y);
}

std::ostream &operator<<(std::ostream &out, Vector &v)
{
    out << "(" << v.x << ", " << v.y << ")";
    return out;
}

std::istream &operator>>(std::istream &in, Vector &v)
{
    cout << "Enter x-coordinate: ";
    in >> v.x;
    cout << "Enter y-coordinate: ";
    in >> v.y;
    return in;
}

int main()
{
    Vector v1, v2;
    // Using overloaded << operator
    cout << "Enter first vector: " << endl;
    cin >> v1;
    cout << "Enter second vector: " << endl;
    cin >> v2;

    // Using overloaded * operator
    Vector result = 2 * v1;
    cout << "Result of scalar multiplication (2 * v1): " << result << endl;

    // Using overloaded << operator
    cout << "v1: " << v1 << endl
         << "v2: " << v2 << endl;
    return 0;
}