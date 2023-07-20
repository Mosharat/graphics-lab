#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;

int main()
{
 int gd = DETECT;
 int gm;

    initgraph(&gd, &gm, " ");

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    int points[8]={50,200,300,200,175,50,50,200};
    drawpoly(4,points);
    floodfill(500,500,BLACK);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    int points1[8]={300,200,500,200,500,100,216,100};
    drawpoly(4,points1);
    floodfill(510,500,BLACK);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(60,200,290,350);
    floodfill(510,500,BLACK);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    int points2[6]={290,350,490,350,490,200};
    drawpoly(3,points2);
    floodfill(510,500,BLACK);

    rectangle(315,250,465,350);
    rectangle(80,250,150,350);
    rectangle(190,220,250,300);
    circle(175,150,20);
    int points3[8]={120,116,120,80,90,80,90,150};
    drawpoly(4,points3);
    rectangle(85,75,125,80);


    //rectangle(52,190,368,200);
    //rectangle(70,210,350,230);


   // setfillstyle(SOLID_FILL,WHITE);
    //floodfill(100,100,BLACK);


    getch();
    closegraph();
    return 0;
}
