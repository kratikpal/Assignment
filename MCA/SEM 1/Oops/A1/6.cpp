#include <iostream>
using namespace std;

class Complex
{
    int real;
    int img;

public:
    friend Complex sum(Complex, Complex);
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    void print() const
    {
        cout << real << "+" << img << "i" << endl;
    }
};

// function to add two complex numbers
Complex sum(Complex c1, Complex c2)
{
    Complex c3(c1.real + c2.real, c1.img + c2.img);
    return c3;
}

int main()
{
    int a, b;
    cout << "Enter real and imaginary part of first complex number: ";
    cin >> a >> b;
    Complex c1(a, b);
    cout << "Enter real and imaginary part of second complex number: ";
    cin >> a >> b;
    Complex c2(a, b);
    Complex c3 = sum(c1, c2);
    cout << "Sum of two complex numbers is: ";
    c3.print();
    return 0;
}