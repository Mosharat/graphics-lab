
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
	     circle(200,200,100);
	     line(200,200,200,120);
	     line(120,200,280,200);
	     line(140,220,260,220);
	     line(160,240,240,240);
	     rectangle(50,50,350,400);


	     getch();
	   closegraph();
	   return 0;
}

