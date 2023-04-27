#include <graphics.h>
#include <stdio.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    setfillstyle(1, 1);
    circle(200, 200, 20);
    floodfill(200, 200, 15);

    setfillstyle(2, 2);
    circle(200, 200, 40);
    floodfill(221, 200, 15);

    setfillstyle(3, 3);
    circle(200, 200, 60);
    floodfill(241, 200, 15);

    setfillstyle(4, 4);
    circle(200, 200, 80);
    floodfill(261, 200, 15);

    setfillstyle(5, 5);
    circle(200, 200, 100);
    floodfill(281, 200, 15);

    getch();
    closegraph();
}
