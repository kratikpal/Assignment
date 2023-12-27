#include <iostream>
using namespace std;

// Declaring Class_2 because it is used in friend function
class Class_2;

class Class_1
{
    int n;

public:
    friend void swapData(Class_1, Class_2);
    Class_1(int n)
    {
        this->n = n;
    }
};

class Class_2
{
    int n;

public:
    friend void swapData(Class_1, Class_2);
    Class_2(int n)
    {
        this->n = n;
    }
};

// Function to swap data
void swapData(Class_1 o1, Class_2 o2)
{
    int temp = o1.n;
    o1.n = o2.n;
    o2.n = temp;

    cout << "After swapping: "
         << "a = " << o1.n << " and "
         << "b = " << o2.n << endl;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    Class_1 obj1(a);
    Class_2 obj2(b);
    swapData(obj1, obj2);
    cout << "Before swapping: "
         << "a = " << a << " and "
         << "b = " << b << endl;
    return 0;
}