#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm;
    int x = 0, y = 0;
    double angle = 0, radians = 0;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    line(0, getmaxy() / 2, getmaxx(), getmaxy() / 2);

    for (x = 0; x < getmaxx(); x++)
    {
        radians = angle * 3.141 / 180;
        y = getmaxy() / 2 - 100 * sin(radians);
        putpixel(x, y, RED);
        angle += 1;
    }
    getch();
    closegraph();
    return 0;
}