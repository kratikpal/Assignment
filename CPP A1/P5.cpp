//  Program to demonstrate new and delete operator in oop
#include <iostream>
using namespace std;

int main()
{
    int *p;
    p = new int(5); // Use of new operator
    cout << *p << endl;
    delete p; // Use of delete operator
    cout << *p << endl;
    return 0;
}