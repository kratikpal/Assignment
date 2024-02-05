#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

void display(string line, int lineNumber)
{
    stringstream words(line);
    string word;
    if (lineNumber == 1)
    {
        cout << " ";
    }

    while (words >> word)
    {
        for (auto i : word)
        {
            if (i != ',')
                cout << i;
        }
        cout << " ";
    }
    cout << endl;
}

int main()
{
    ifstream infile("test.csv");
    string line;
    int lineNumber = 0;
    while (getline(infile, line))
    {
        lineNumber++;
        display(line, lineNumber);
    }
    return 0;
}