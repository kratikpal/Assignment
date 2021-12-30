#include <iostream>
#include <string>
using namespace std;

class Student
{
    int roll;
    double per;
    string name;

public:
    void set()
    {
        cin >> roll;
        cin.ignore();
        cin >> name >> per;
    }
    void get()
    {
        cout << "Roll no:- " << roll << endl
             << "Name:- " << name << endl
             << "Percentage:- " << per << endl;
    }
};

int main()
{
    Student a[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter roll no, name and percentage of student " << i + 1 << endl;
        a[i].set();
    }
    for (int i = 0; i < 5; i++)
        a[i].get();
    return 0;
}