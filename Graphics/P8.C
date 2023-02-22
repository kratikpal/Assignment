#include <stdio.h>
#include <graphics.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    ellipse(320, 200, 0, 180, 340, 80);
    ellipse(320, 220, 0, 180, 340, 80);
    ellipse(320, 240, 0, 180, 340, 80);
    ellipse(320, 260, 0, 180, 340, 80);
    ellipse(320, 280, 0, 180, 340, 80);
    ellipse(320, 300, 0, 180, 340, 80);
    ellipse(320, 320, 0, 180, 340, 80);
    ellipse(320, 340, 0, 180, 340, 80);
    setfillstyle(1, RED);
    floodfill(320, 122, 15);
    setfillstyle(1, LIGHTRED);
    floodfill(320, 142, 15);
    setfillstyle(1, YELLOW);
    floodfill(320, 162, 15);
    setfillstyle(1, GREEN);
    floodfill(320, 182, 15);
    setfillstyle(1, CYAN);
    floodfill(320, 202, 15);
    setfillstyle(1, LIGHTBLUE);
    floodfill(320, 222, 15);
    setfillstyle(1, BLUE);
    floodfill(320, 242, 15);
    getch();
    closegraph();
}