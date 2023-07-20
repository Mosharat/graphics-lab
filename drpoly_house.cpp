#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;

int main()
{
 int gd = DETECT;
 int gm;

    initgraph(&gd, &gm, " ");

    int points[6]={150,200,300,50,450,200};
    drawpoly(3,points);

    int points2[12]={200,190,300,80,400,190,400,340,200,340,200,190};
    drawpoly(6,points2);

    int points3[8]={200,200,160,240,160,340,200,340};
    drawpoly(4,points3);

    int points4[8]={400,200,440,240,440,340,400,340};
    drawpoly(4,points4);

    rectangle(290,300,310,340);




    //setfillstyle(SOLID_FILL,WHITE);
    //floodfill(10,10,BLACK);


    getch();
    closegraph();
    return 0;
}
