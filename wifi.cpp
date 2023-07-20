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
	     setlinestyle(0,0,10);
	     circle(200,200,10);
	     setfillstyle(SOLID_FILL,DARKGRAY);
         floodfill(200,200,DARKGRAY);
         arc(200,200,45,135,30);
         arc(200,200,45,135,50);
         arc(200,200,45,135,70);




	     getch();
	   closegraph();
	   return 0;
}
