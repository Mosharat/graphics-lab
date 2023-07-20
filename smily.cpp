#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;

int main()
{
 int gd = DETECT;
 int gm;

    initgraph(&gd, &gm, " ");

     circle(200,200,100);
     circle(160,150,10);
     circle(240,150,10);
     circle(200,200,5);
     arc(200,200,180,360,60);

     getch();
    closegraph();
    return 0;
}
