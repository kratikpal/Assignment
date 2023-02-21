#include <conio.h>
#include <stdio.h>
#include <graphics.h>

void main()
{
    int gd = DETECT, gm;
    clrscr();
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    line(160, 10, 480, 10);
    circle(320, 70, 40);
    arc(320, 170, 0, 270, 40);
    rectangle(160, 250, 480, 330);
    ellipse(320, 405, 0, 360, 100, 50);
    getch();
    closegraph();
}