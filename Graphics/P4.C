#include <stdio.h>
#include <graphics.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    outtextxy(275, 10, "Bar Chart");
    line(100, 420, 100, 60);
    line(100, 420, 600, 420);
    line(90, 70, 100, 60);
    line(110, 70, 100, 60);
    line(590, 410, 600, 420);
    line(590, 430, 600, 420);
    outtextxy(95, 35, "Y");
    outtextxy(610, 405, "X");
    outtextxy(85, 415, "O");
    bar(150, 100, 200, 419);
    bar(225, 150, 275, 419);
    bar(300, 200, 350, 419);
    bar(375, 125, 425, 419);
    bar(450, 175, 500, 419);
    getch();
    closegraph();
}