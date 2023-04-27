#include <conio.h>
#include <stdio.h>
#include <graphics.h>

void k(int x)
{
    line(x, 200, x, 280);
    arc(x - 18, 240, 25, 340, 20);
    arc(x + 18, 240, 215, 140, 20);
    return;
}

void main()
{
    int gd = DETECT, gm;
    clrscr();
    initgraph(&gd, &gm, "C://TURBOC3//BGI");
    k(240);
    arc(235, 295, 80, 300, 18);
    ellipse(335, 270, 70, 205, 35, 35);
    line(290, 200, 290, 280);
    line(348, 200, 348, 280);
    ellipse(315, 195, 350, 195, 25, 25);
    k(400);
    line(190, 200, 440, 200);
    getch();
    closegraph();
}