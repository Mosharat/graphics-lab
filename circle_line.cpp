#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<bits/stdc++.h>
using namespace std;

     int main( )
	 {
	     int x1,y1,x2,y2,dx,dy,ds,dt,d,x,y,t,m;
	     /* request auto detection */
	     int gdriver = DETECT, gmode, errorcode;

	    /* initialize graphics and local variables */
	     initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	     setbkcolor(WHITE);
	     setcolor(DARKGRAY);
	     cleardevice();
         //setlinestyle(0,0,8);
         circle(250,200,100);
         setfillstyle(SOLID_FILL,DARKGRAY);
         floodfill(250,200,DARKGRAY);

         setcolor(WHITE);
         setlinestyle(0,0,8);
         line(250,100,250,300);
         line(150,200,350,200);
         setfillstyle(SOLID_FILL,WHITE);
         floodfill(250,100,WHITE);

         setcolor(DARKGRAY);
         line(250,100,250,70);
         line(250,300,250,330);
         line(150,200,120,200);
         line(350,200,380,200);
         //setfillstyle(SOLID_FILL,DARKGRAY);
         //floodfill(250,100,DARKGRAY);


          getch();
	   closegraph();
	   return 0;
}
