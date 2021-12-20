#include <conio.h>
#include <stdio.h>

void main()
{
    int a[3][3], b[3][3], i, j, k, ans[3][3] = {0};
    // clrscr();
    printf("Enter first 3*3 matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter second 3*3 matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                ans[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Multiplication of both matrix is\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
    getch();
}