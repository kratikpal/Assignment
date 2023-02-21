#include <graphics.h>
#include <stdio.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Draw concentric circles filled with different colors and patterns
    setfillstyle(SOLID_FILL, RED);
    fillellipse(100, 100, 50, 50);

    setfillstyle(HATCH_FILL, BLUE);
    fillellipse(100, 100, 40, 40);

    setfillstyle(XHATCH_FILL, GREEN);
    fillellipse(100, 100, 30, 30);

    setfillstyle(INTERLEAVE_FILL, YELLOW);
    fillellipse(100, 100, 20, 20);

    setfillstyle(WIDE_DOT_FILL, MAGENTA);
    fillellipse(100, 100, 10, 10);

    getch();
    closegraph();
}
