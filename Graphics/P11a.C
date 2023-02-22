#include <stdio.h>
#include <graphics.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm, x, y;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    circle(320, 240, 100);
    line(320, 140, 240, 300);
    line(320, 140, 400, 300);
    line(240, 300, 400, 300);
    circle(320, 250, 50);
    getch();
    closegraph();
}