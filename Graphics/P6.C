#include <stdio.h>
#include <graphics.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    ellipse(200, 200, 275, 265, 80, 80);
    ellipse(200, 200, 290, 250, 20, 20);
    line(192, 218, 192, 280);
    line(208, 218, 208, 280);
    setfillstyle(1, 1);
    floodfill(160, 200, 15);
    getch();
    closegraph();
}