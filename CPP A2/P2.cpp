#include <iostream>
using namespace std;

class Time
{
    int hh, mm, ss;

public:
    Time(int h, int m, int s)
    {
        hh = h;
        mm = m;
        ss = s;
    }
    Time add(Time o1, Time o2)
    {
        Time o3(0, 0, 0);
        o3.hh = o1.hh + o2.hh;
        o3.mm = o1.mm + o2.mm;
        o3.ss = o1.ss + o2.ss;
        return o3;
    }
    void display()
    {
        cout << "Sum of time is :- " << hh << ":" << mm << ":" << ss << endl;
    }
};

int main()
{
    int hh, mm, ss;
    cout << "Enter first hh:mm:ss " << endl;
    cin >> hh >> mm >> ss;
    Time o1(hh, mm, ss);
    cout << "Enter second hh:mm:ss " << endl;
    cin >> hh >> mm >> ss;
    Time o2(hh, mm, ss);
    Time o3(0, 0, 0);
    o3 = o3.add(o1, o2);
    o3.display();
    return 0;
}