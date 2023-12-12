#include <iostream>
using namespace std;
#define MAX 10

class Matrix
{
    int arr[MAX][MAX];

public:
    Matrix(int row, int col)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                arr[i][j] = 0;
            }
        }
    }

    void insert(int row, int col, int val)
    {
        if (row < 0 || row >= MAX || col < 0 || col >= MAX)
        {
            return;
        }
        arr[row][col] = val;
    }

    int get(int row, int col)
    {
        if (row < 0 || row >= MAX || col < 0 || col >= MAX)
        {
            return -1;
        }
        return arr[row][col];
    }
};

int main()
{
    Matrix obj(3, 3);
    obj.insert(0, 0, 1);
    obj.insert(0, 1, 2);
    obj.insert(0, 2, 3);
    obj.insert(1, 0, 4);
    obj.insert(1, 1, 5);
    cout<<obj.get(1, 1);
    return 0;
}