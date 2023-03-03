#include <stdio.h>
#include <graphics.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Draw the input wires
    line(50, 100, 100, 100);
    line(50, 200, 100, 200);

    // Draw the XOR gate
    rectangle(100, 75, 150, 225);
    line(150, 150, 200, 150);
    line(150, 175, 200, 175);

    // Draw the output wires
    line(200, 125, 250, 125);
    line(200, 175, 250, 175);

    // Draw the output labels
    outtextxy(260, 100, "SUM");
    outtextxy(260, 200, "CARRY");

    getch();
    closegraph();
}