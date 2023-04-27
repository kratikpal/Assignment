// Program to implement direct method of line generation.
#include <conio.h>
#include <graphics.h>
#include <stdio.h>

void drawLine(int x1, int y1, int x2, int y2)
{
    int dx, dy, m, c, i;
    dx = x2 - x1;
    dy = y2 - y1;
    m = dy / dx;
    c = y1 - m * x1;
    if (m <= 0)
    {
        for (i = x1; i <= x2; i++)
        {
            y1 = m * i + c;
            putpixel(i, y1, 15);
        }
    }
    else
    {
        for (i = y1; i <= y2; i++)
        {
            x1 = (i - c) / m;
            putpixel(x1, i, 15);
        }
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