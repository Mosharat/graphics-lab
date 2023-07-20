
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
	     int point[10]={200,100,100,200,200,300,300,200,200,100};
	     drawpoly(5,point);

	     int point2[10]={200,150,150,200,200,250,250,200,200,150};
	     drawpoly(5,point2);

	     line(100,200,300,200);
	     line(200,150,200,250);
	     line(150,150,250,250);
	     line(150,250,250,150);

	     getch();
	   closegraph();
	   return 0;
}
