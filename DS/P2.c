#include <stdio.h>
#include <conio.h>

void main()
{
    int i, a[3];
    // clrscr();
    printf("Enter 3 elements of array\n");
    for (i = 0; i < 3; i++)

        scanf("%d", &a[i]);

    printf("3 elements of array are\n");
    for (i = 0; i < 3; i++)
        printf("%d ", a[i]);

    getch();
}