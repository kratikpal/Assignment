#include <conio.h>
#include <stdio.h>

int fact(int n)
{
    if (n == 1)
        return 1;
    return n * fact(n - 1);
}

void main()
{
    int n;
    // clrscr();
    printf("Enter a number\n");
    scanf("%d", &n);
    printf("Fectorial of %d is %d", n, fact(n));
    getch();
}