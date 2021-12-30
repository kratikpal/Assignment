// Program to demonstrate how comma operator replace block{}
#include <iostream>
using namespace std;

int main()
{
    if (1)
        cout << "Use of ",
            cout << "comma operator at place of block{}" << endl;
    return 0;
}