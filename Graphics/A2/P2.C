// Program for DDA
#include <conio.h>
#include <graphics.h>
#include <stdio.h>
#include <math.h>

int round(float num)
{
    int k = num;
    return (num - k) > 0.5 ? k + 1 : k;
}

void drawLine(int x1, int y1, int x2, int y2)
{
    int dx, dy, k, i;
    float x, y, xinc, yinc;
    dx = x2 - x1;
    dy = y2 - y1;
    x = x1;
    y = y1;
    putpixel(x, y, 15);
    k = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
    xinc = ((float)dx) / k;
    yinc = ((float)dy) / k;
    for (i = 0; i < k; i++)
    {
        x += xinc;
        y += yinc;
        putpixel(round(x), round(y), 15);
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