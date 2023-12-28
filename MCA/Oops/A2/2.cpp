// Finding specific string in a file
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile("test.txt");
    if (!infile)
    {
        cout << "File not found";
        return 0;
    }
    string line;
    string search;
    int lineCount = 0;
    bool found = false;
    cout << "Enter the string to be searched: ";
    cin >> search;
    while (getline(infile, line))
    {
        lineCount++;
        if (line.find(search) != string::npos)
        {
            cout << "Found in line: " << lineCount << endl;
            found = true;
        }
    }
    if (!found)
    {
        cout << "Not found";
    }
    return 0;
}