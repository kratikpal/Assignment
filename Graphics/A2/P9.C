// WAP to perform 2-D Rotation with angle 90
#include <stdio.h>
#include <conio.h>
#define N 2

// Rotate matrix
void rotate(int a[N][N])
{
    int i, j, temp;
    for (i = 0; i < N / 2; i++)
    {
        for (j = i; j < N - i - 1; j++)
        {
            temp = a[i][j];
            a[i][j] = a[N - 1 - j][i];
            a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j];
            a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i];
            a[j][N - 1 - i] = temp;
        }
    }
}

// Print matrix
void print(int a[N][N])
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void main()
{
    int a[N][N] = {{1, 2}, {3, 4}};
    printf("Original matrix:\n");
    print(a);
    rotate(a);
    printf("Rotated matrix:\n");
    print(a);
    getch();
}