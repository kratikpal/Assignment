// WAP to perform 2-D Refraction
#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main()
{
    int x1 = 100, x2 = 100, x3 = 200;
    int y1 = 100, y2 = 200, y3 = 100;
    int gd, gm;
    gd = DETECT;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Graph
    line(0, getmaxy() / 2, getmaxx(), getmaxy() / 2);
    line(getmaxx() / 2, 0, getmaxx() / 2, getmaxy());

    // Object
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    // Reflection along x-axis
    line(getmaxx() - x1, y1, getmaxx() - x2, y2);
    line(getmaxx() - x2, y2, getmaxx() - x3, y3);
    line(getmaxx() - x3, y3, getmaxx() - x1, y1);

    getch();
    closegraph();
}