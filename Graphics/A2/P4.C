// WAP to implement mid-point circle algorithm
#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void drawCircle(int Xo, int Yo, int r)
{
    int x = 0;
    int y = r;
    int P = 1 - r;

    while (x <= y)
    {
        putpixel(Xo + x, Yo + y, WHITE);
        putpixel(Xo + y, Yo + x, WHITE);
        putpixel(Xo - y, Yo + x, WHITE);
        putpixel(Xo - x, Yo + y, WHITE);
        putpixel(Xo - x, Yo - y, WHITE);
        putpixel(Xo - y, Yo - x, WHITE);
        putpixel(Xo + y, Yo - x, WHITE);
        putpixel(Xo + x, Yo - y, WHITE);

        x++;
        if (P < 0)
        {
            P += 2 * x + 1;
        }
        else
        {
            y--;
            P += 2 * (x - y) + 1;
        }
    }
}

void main()
{
    int gd, gm;
    gd = DETECT;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    drawCircle(100, 100, 50);

    getch();
    closegraph();
}
