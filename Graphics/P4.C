#include <graphics.h>
#include <stdio.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;
    int data[] = {50, 75, 60, 90, 85};
    int num_bars = sizeof(data) / sizeof(data[0]);
    int bar_width = 50;
    int x = 50;
    int y = 300;
    int x1 = 50;
    int y1 = 50;
    int z1 = 100;
    int x2 = 200;
    int y2 = 200;
    int z2 = 200, i = 0;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Draw a bar graph

    for (int i = 0; i < num_bars; i++)
    {
        bar(x, y, x + bar_width, y - data[i]);
        x = x + bar_width + 50;
    }

    // Draw a 3D bar graph

    bar3d(x1, y1, x2, y2, z1, z2);

    getch();
    closegraph();
}
