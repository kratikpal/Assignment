// Program to print matrix in spiral form
#include <iostream>
using namespace std;

// function to print matrix in spiral form
void spiralPrint(int matrix[4][4], int row, int col)
{
    int crow = 0, ccol = 0;
    while (crow < row && ccol < col)
    {
        // printing first row
        for (int i = ccol; i < col; i++)
        {
            cout << matrix[crow][i] << " ";
        }
        crow++;
        // printing last column
        for (int i = crow; i < row; i++)
        {
            cout << matrix[i][col - 1] << " ";
        }
        col--;
        // printing last row
        if (crow < row)
        {
            for (int i = col - 1; i >= ccol; i--)
            {
                cout << matrix[row - 1][i] << " ";
            }
            row--;
        }
        // printing first column
        if (ccol < col)
        {
            for (int i = row - 1; i >= crow; i--)
            {
                cout << matrix[i][ccol] << " ";
            }
            ccol++;
        }
    }
}

int main()
{
    int matrix[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    spiralPrint(matrix, 4, 4);
    return 0;
}