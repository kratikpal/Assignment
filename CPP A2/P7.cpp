#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "Enter string" << endl;
    cin >> s;
    int i = 0;
    while (s[i])
        i++;
    cout << "Length is " << i << endl;
    return 0;
}