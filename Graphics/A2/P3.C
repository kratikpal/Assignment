// WAP to implement Bresenham's method of line generation
#include <conio.h>
#include <stdio.h>
#include <graphics.h>

void drawLine(int x1, int y1, int x2, int y2)
{
    int dx, dy, x, y, p;
    dx = x2 - x1;
    dy = y2 - y1;
    x = x1;
    y = y1;
    p = 2 * dy - dx;
    while (x <= x2)
    {
        putpixel(x, y, 15);
        if (p < 0)
        {
            p = p + 2 * dy;
        }
        else
        {
            p = p + 2 * dy - 2 * dx;
            y = y + 1;
        }
        x = x + 1;
    }
}

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    drawLine(100, 100, 200, 100);
    getch();
    closegraph();
}