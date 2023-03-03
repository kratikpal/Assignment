#include <stdio.h>
#include <graphics.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Draw the roof
    line(100, 200, 200, 100);
    line(200, 100, 300, 200);

    // Draw the walls
    rectangle(100, 200, 300, 400);

    // Draw the door
    rectangle(160, 310, 240, 400);

    // Draw the windows
    rectangle(120, 220, 180, 280);
    rectangle(220, 220, 280, 280);

    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(111, 201, WHITE);
    setfillstyle(SOLID_FILL, RED);
    floodfill(199, 101, WHITE);

    getch();
    closegraph();
}