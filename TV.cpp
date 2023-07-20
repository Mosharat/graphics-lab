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
	     setcolor(BLACK);
	     cleardevice();
	     setlinestyle(0,0,8);

	     rectangle(200,150,400,250);
	     line(300,250,300,300);
	     line(200,252,400,252);
	     ellipse(300,300,0,360,50,5);

	     setcolor(WHITE);
	     circle(300,251,1);
         setfillstyle(SOLID_FILL,WHITE);
         floodfill(245,190,WHITE);






	      getch();
	   closegraph();
	   return 0;
}
