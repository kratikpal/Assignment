#include <stdio.h>
#include <graphics.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm, x, y;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    rectangle(100, 100, 300, 200);
    line(100, 150, 200, 100);
    line(100, 150, 200, 200);
    line(300, 150, 200, 100);
    line(300, 150, 200, 200);
    rectangle(150, 125, 250, 175);
    ellipse(200, 150, 0, 360, 50, 25);
    getch();
    closegraph();
}