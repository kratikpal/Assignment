// WAP to perform 2-D Translation
#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void translate(int p[], int tf[])
{
    putpixel(p[0], p[1], 15);
    p[0] += tf[0];
    p[1] += tf[1];
    putpixel(p[0], p[1], 15);
}

void main()
{
    int p[] = {10, 10};
    int tf[] = {5, 5};

    int gd, gm;
    gd = DETECT;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    translate(p, tf);

    getch();
    closegraph();
}