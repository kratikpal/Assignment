#include <stdio.h>
#include <graphics.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm, x, y;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    circle(200, 200, 25);
    circle(175, 245, 25);
    circle(225, 245, 25);
    line(200, 200, 175, 245);
    line(200, 200, 225, 245);
    line(175, 245, 225, 245);
    getch();
    closegraph();
}