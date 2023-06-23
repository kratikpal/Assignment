// WAP to implement Brestham's circle algorithm
#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void drawCircle(int Xo, int Yo, int r)
{
    int x = 0;
    int y = r;
    int P = 3 - 2 * r;

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
            P += 4 * x + 6;
        }
        else
        {
            y--;
            P += 4 * (x - y) + 10;
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