// WAP to perform 2-D Shearing
#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int shearingx(int x, int y, int sx)
{
    return x + sx * y;
}

int shearingy(int x, int y, int sy)
{
    return y + sy * x;
}

void main()
{
    int x1 = 100, x2 = 100, x3 = 200;
    int y1 = 100, y2 = 200, y3 = 100;
    int gd, gm;
    gd = DETECT;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Object
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    // Shearing
    line(shearingx(x1, y1, 2), shearingy(x1, y1, 2), shearingx(x2, y2, 2), shearingy(x2, y2, 2));
    line(shearingx(x2, y2, 2), shearingy(x2, y2, 2), shearingx(x3, y3, 2), shearingy(x3, y3, 2));
    line(shearingx(x3, y3, 2), shearingy(x3, y3, 2), shearingx(x1, y1, 2), shearingy(x1, y1, 2));

    getch();
    closegraph();
}