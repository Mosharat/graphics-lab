#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;

int main()
{
 int gd = DETECT;
 int gm;

    initgraph(&gd, &gm, " ");

    ellipse(200,200,0,360,150,50);
    fillellipse(350,350,150,50);

    getch();
    closegraph();
    return 0;
}
