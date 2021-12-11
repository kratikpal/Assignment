#include <iostream>
using namespace std;

extern int e = 1;

int main()
{
    int a; /*auto variable*/
    register int r;
    static int s;
    cout << "Default value of auto variable is  (garbage)" << a << endl;
    cout << "Default value of register variable is  (garbage)" << r << endl;
    cout << "Assigned value of extern variable is " << e << endl;
    cout << "Default value of static variable is  (zero)" << s << endl;
    return 0;
}