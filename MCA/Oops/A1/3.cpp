#include <iostream>
#include <string>
using namespace std;

class Manager
{
public:
    string name;
    int id;

    // Manager(string n, int i)
    // {
    //     name = n;
    //     id = i;
    // }
    void display()
    {
        cout << name << " " << id << endl;
    }
};

int main()
{
    Manager m[10];
    int n;
    cout << "Enter the number of managers (max 10):";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the name and id of manager " << i + 1 << ":";
        cin >> m[i].name >> m[i].id;
    }
    for (int i = 0; i < n; i++)
    {
        m[i].display();
    }
    return 0;
}