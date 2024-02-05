#include <iostream>
using namespace std;

class Copmlex
{
    int real;
    int img;

public:
    Copmlex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    Copmlex operator+(Copmlex obj)
    {
        Copmlex temp;
        temp.real = real + obj.real;
        temp.img = img + obj.img;
        return temp;
    }
    Copmlex operator*(Copmlex obj)
    {
        Copmlex temp;
        temp.real = real * obj.real - img * obj.img;
        temp.img = real * obj.img + img * obj.real;
        return temp;
    }
    void display()
    {
        cout << real << "+" << img << "i" << endl;
    }
};

int main()
{
    Copmlex c1(4, 3), c2(5, 2);
    Copmlex c3 = c1 + c2;
    c3.display();
    Copmlex c4 = c1 * c2;
    c4.display();
    return 0;
}