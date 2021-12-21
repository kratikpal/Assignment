#include <stdio.h>
#include <conio.h>

void main()
{
    int a[3][3], i, j, count = 0;
    // clrscr();
    printf("Enter first 3*3 matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 0)
                count++;
        }
    }
    if (count > (3 * 3) / 2)
        printf("Matrix is sparse\n");
    else
        printf("Matrix is not sparse\n");
    getch();
}