// Program to demonstrate reference and dereference operator
#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *p = &a; // referenceing  and dereferenceing
    cout << *p << endl;
    return 0;
}