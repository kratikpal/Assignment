#include <stdio.h>
#include <graphics.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    setfillstyle(1, 1);
    pieslice(200, 200, 0, 90, 80);
    setfillstyle(1, 2);
    pieslice(200, 200, 90, 160, 80);
    setfillstyle(1, 3);
    pieslice(200, 200, 160, 300, 80);
    setfillstyle(1, 4);
    pieslice(200, 200, 300, 360, 80);
    getch();
    closegraph();
}