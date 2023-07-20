
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

	     int point[10]={100,200,140,200,200,300,260,200,300,200};
	     drawpoly(5,point);
	     circle(200,200,100);
	     rectangle(50,50,350,400);


	     getch();
	   closegraph();
	   return 0;
}
