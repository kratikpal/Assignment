#include <conio.h>
#include <stdio.h>
#include <graphics.h>

void main()
{
    int gd = DETECT, gm;
    clrscr();
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    setlinestyle(0, 0, 3);
    line(160, 190, 480, 190);
    setlinestyle(1, 0, 3);
    line(160, 220, 480, 220);
    setlinestyle(2, 0, 3);
    line(160, 250, 480, 250);
    setlinestyle(3, 0, 3);
    line(160, 280, 480, 280);
    getch();
    closegraph();
}