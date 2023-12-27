#include <iostream>
using namespace std;
#define MAX 10

class Matrix
{
    int arr[MAX][MAX];
    int row, col;

public:
    Matrix(int r, int c)
    {
        row = r;
        col = c;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                arr[i][j] = 0;
            }
        }
    }
    void insert(int r, int c, int val)
    {
        if (r < 0 || r >= row || c < 0 || c >= col)
        {
            cout << "Invalid index" << endl;
            return;
        }
        arr[r][c] = val;
    }
    Matrix operator+(Matrix obj)
    {
        Matrix temp(row, col);
        if (row != obj.row || col != obj.col)
        {
            cout << "Invalid operation" << endl;
            return temp;
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                temp.arr[i][j] = arr[i][j] + obj.arr[i][j];
            }
        }
        return temp;
    }
    Matrix operator*(Matrix obj)
    {
        Matrix temp(row, col);
        if (col != obj.row)
        {
            cout << "Invalid operation" << endl;
            return temp;
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                temp.arr[i][j] = 0;
                for (int k = 0; k < col; k++)
                {
                    temp.arr[i][j] += arr[i][k] * obj.arr[k][j];
                }
            }
        }
        return temp;
    }
    void display()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Matrix m1(2, 2), m2(2, 2);
    m1.insert(0, 0, 1);
    m1.insert(0, 1, 2);
    m1.insert(1, 0, 3);
    m1.insert(1, 1, 4);
    Matrix m3 = m1 + m2;
    m3.display();
    Matrix m4 = m1 * m2;
    m4.display();
    return 0;
}