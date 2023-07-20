#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;

int main()
{
 int gd = DETECT;
 int gm;

    initgraph(&gd, &gm, " ");

     bar(100,100,200,200);
     bar(100,250,200,300);

     bar3d(240,100,290,200,20,1);//roof
     bar3d(240,250,290,300,20,0);//no roof

     outtextxy(90,60,"This is normal bar");
     outtextxy(240,60,"This are 3D bar's");

     int points[12]={350,100,550,100,550,300,350,100,350,300,550,300};
     drawpoly(6,points);
     fillpoly(6,points);

     getch();
    closegraph();
    return 0;
}
