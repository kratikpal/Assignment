// WAP to perform 2D scaling when Sx & Sy>1 and Sx is not equal to Sy
#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int scale(int p, int sf)
{
    return p * sf;
}

void main()
{
    int sx = 3, sy = 2;

    int gd, gm;
    gd = DETECT;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    rectangle(10, 10, 50, 50);
    rectangle(scale(10, sx), scale(10, sy), scale(50, sx), scale(50, sy));

    getch();
    closegraph();
}