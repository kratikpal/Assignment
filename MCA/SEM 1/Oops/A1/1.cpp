#include <iostream>
#include <string>
using namespace std;

class P
{
    string name;
    int age;
    static int count;

public:
    P(string n, int a)
    {
        name = n;
        age = a;
        count++;
    }
    // function to show count of objects
    static void showCount()
    {
        cout << "Number of objects:" << count << endl;
    }
};
int P::count = 0;

int main()
{
    P p1 = P("shubham", 3);
    P p2 = P("shubham", 3);
    p2.showCount();
    return 0;
}