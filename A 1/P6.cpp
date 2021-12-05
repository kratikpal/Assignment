#include <iostream>
using namespace std;

int main()
{
    int p, c, m;
    float per;
    cout << "Enter marks of physics chemestry and maths" << endl;
    cin >> p >> c >> m;
    per = (p + c + m) / 3.0;
    cout << "Your percentage are " << per << endl;
    if (per >= 85)
        cout << "You got A grade" << endl;
    else if (75 <= per && per <= 84.9f)
        cout << "You got B grade" << endl;
    else if (50 <= per && per <= 69.9f)
        cout << "You got C grade" << endl;
    else if (33 <= per && per <= 49.9f)
        cout << "You got D grade" << endl;
    else
        cout << "You are fail" << endl;

    return 0;
}