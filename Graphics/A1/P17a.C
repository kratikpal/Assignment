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

void input(int y)
{
    line(240, y, 400, y);
    line(230, y + 40, 390, y + 40);
    line(240, y, 230, y + 40);
    line(400, y, 390, y + 40);
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
    input(80);
    outtextxy(275, 97, "Input = P,R,T");
    arrow(120);
    rectangle(240, 150, 400, 190);
    outtextxy(260, 167, "S.I=(P*R*T)/100");
    arrow(190);
    input(220);
    outtextxy(275, 227, "Output = S.I");
    arrow(260);
    start(290, 330);
    outtextxy(300, 307, "Stop");
    getch();
    closegraph();
}