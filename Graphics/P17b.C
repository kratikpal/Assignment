#include <conio.h>
#include <stdio.h>
#include <graphics.h>

void arrow(int y1)
{
    int x2 = 320, y2 = y1 + 30;
    line(320, y1, x2, y2);
    line(x2, y2, x2 + 7, y2 - 10);
    line(x2, y2, x2 - 7, y2 - 10);
    return;
}

void ellip(int x, int y, int check)
{
    if (check)
        ellipse(x, y, 90, 270, 10, 20);
    else
        ellipse(x, y, 270, 90, 10, 20);
    return;
}

void start(int y1, int y2)
{
    line(240, y1, 400, y1);
    line(240, y2, 400, y2);
    ellip(240, (y1 + y2) / 2, 1);
    ellip(400, (y1 + y2) / 2, 0);
    return;
}

void input(int x, int y)
{
    line(x, y, x + 160, y);
    line(x - 10, y + 40, x + 150, y + 40);
    line(x, y, x - 10, y + 40);
    line(x + 160, y, x + 150, y + 40);
    return;
}

void main()
{
    int gd = DETECT, gm;
    clrscr();
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    start(10, 50);
    outtextxy(300, 23, "Start");
    arrow(50);
    input(240, 80);
    outtextxy(280, 97, "Input = n");
    arrow(120);
    line(320, 150, 270, 200);
    line(320, 150, 370, 200);
    line(270, 200, 320, 250);
    line(370, 200, 320, 250);
    outtextxy(280, 197, "If(n%2==0)");
    line(270, 200, 220, 200);
    line(370, 200, 420, 200);
    line(220, 200, 220, 240);
    line(420, 200, 420, 240);
    input(140, 240);
    outtextxy(180, 257, "Output = even");
    input(340, 240);
    outtextxy(380, 257, "Output = odd");
    line(220, 280, 220, 310);
    line(420, 280, 420, 310);
    line(220, 310, 420, 310);
    arrow(310);
    start(340, 380);
    outtextxy(300, 357, "Stop");
    getch();
    closegraph();
}