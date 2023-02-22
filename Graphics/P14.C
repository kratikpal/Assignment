#include <stdio.h>
#include <graphics.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm, x, y;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    // Emoji 1
    circle(200, 200, 50);
    circle(180, 180, 5);
    circle(220, 180, 5);
    ellipse(200, 220, 0, 360, 25, 10);
    // Emoji 2
    circle(400, 200, 50);
    circle(380, 180, 5);
    circle(420, 180, 5);
    arc(400, 220, 180, 360, 10);
    getch();
    closegraph();
}