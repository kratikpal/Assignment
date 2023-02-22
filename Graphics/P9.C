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
        circle(x, y, random(50));
        setfillstyle(random(12), random(15));
        floodfill(x, y, 15);
        delay(300);
    }

    getch();
    closegraph();
}