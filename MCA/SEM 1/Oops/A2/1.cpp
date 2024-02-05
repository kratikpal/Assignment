// Reading data from a file
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

// Function to count number of words in a file
int countWords(string s)
{
    stringstream words(s);
    string word;
    int count = 0;
    while (words >> word)
    {
        count++;
    }
    return count;
}

int main()
{
    ifstream infile("test.txt");
    string line;
    int lineCount = 0;
    int wordCount = 0;

    // Count number of lines and words
    while (getline(infile, line))
    {
        lineCount++;
        wordCount += countWords(line);
    }

    cout << "Number of lines: " << lineCount << endl
         << "Number of words: " << wordCount << endl;
    return 0;
}