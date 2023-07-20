#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;

int main()
{
 int gd = DETECT;
 int gm;

    initgraph(&gd, &gm, " ");

    int points[8]={50,200,370,200,210,50,50,200};
    drawpoly(4,points);
    //rectangle(52,190,368,200);
    rectangle(70,210,350,230);
    rectangle(80,240,130,370);
    rectangle(180,240,230,370);
    rectangle(280,240,330,370);
    rectangle(70,380,350,400);
    rectangle(60,410,360,430);

    setfillstyle(SOLID_FILL,WHITE);
    floodfill(400,400,WHITE);


    getch();
    closegraph();
    return 0;
}
