#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;

int main()
{
 int gd = DETECT;
 int gm;

    initgraph(&gd, &gm, " ");

    int points[8]={200,200,400,200,300,50,200,200};
    drawpoly(4,points);
    rectangle(220,200,380,350);
    circle(250,240,20);
    circle(350,240,20);
    rectangle(265,270,335,350);
    circle(320,310,7);
    line(50,320,220,320);
    line(380,320,550,320);
    circle(450,80,25);



     getch();
    closegraph();
    return 0;
}

