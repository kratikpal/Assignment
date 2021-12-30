#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(string s)
{
    string a = s;
    reverse(a.begin(), a.end());
    if (s == a)
        return true;
    return false;
}

int main()
{
    string s;
    cout << "Enter string" << endl;
    cin >> s;
    if (isPalindrome(s))
        cout << s << " is Palindrome" << endl;
    else
        cout << s << " is not Palindrome" << endl;
    return 0;
}