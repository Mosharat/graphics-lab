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
         rectangle(200,100,350,200);
         rectangle(350,120,390,180);
         rectangle(390,135,430,165);
         int points[8]={430,135,460,100,460,200,430,165};
         drawpoly(4,points);
         circle(240,65,35);
         circle(315,65,35);
         circle(240,65,10);
         circle(315,65,10);
         int points1[14]={245,200,225,300,240,300,275,200,310,300,325,300,305,200};
         drawpoly(7,points1);





	       getch();
	   closegraph();
	   return 0;
}
