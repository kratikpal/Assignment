#include <conio.h>
#include <stdio.h>
#include <graphics.h>

void main()
{
    int gd = DETECT, gm, i, maxx, cy;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    setcolor(RED);
    maxx = getmaxx();
    cy = getmaxy() / 2;
    for (i = 0; i < maxx - 140; i++)
    {
        cleardevice();
        line(i, cy - 20, i, cy + 15);
        line(i, cy - 20, 25 + i, cy - 20);
        line(25 + i, cy - 20, 40 + i, cy - 70);
        line(40 + i, cy - 70, 100 + i, cy - 70);
        line(100 + i, cy - 70, 115 + i, cy - 20);
        line(115 + i, cy - 20, 140 + i, cy - 20);
        line(i, cy + 15, 18 + i, cy + 15);
        circle(28 + i, cy + 15, 10);
        line(38 + i, cy + 15, 102 + i, cy + 15);
        circle(112 + i, cy + 15, 10);
        line(122 + i, cy + 15, 140 + i, cy + 15);
        line(140 + i, cy + 15, 140 + i, cy - 20);
        rectangle(50 + i, cy - 62, 90 + i, cy - 30);
        delay(10);
    }
    getch();
    closegraph();
}