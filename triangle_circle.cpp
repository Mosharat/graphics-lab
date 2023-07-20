
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
           line(200,100,200,230);
	     int point[8]={100,230,300,230,200,400,100,230};
	     drawpoly(4,point);
	     circle(200,290,55);
	     rectangle(50,50,350,450);

	     getch();
	   closegraph();
	   return 0;
}
