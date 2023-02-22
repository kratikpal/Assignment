#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int gd = DETECT, gm, x, y;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    while (!kbhit())
    {
        x = random(getmaxx());
        y = random(getmaxy());
        putpixel(x, y, 15);
        delay(100);
    }

    getch();
    closegraph();
}