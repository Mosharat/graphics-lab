#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<bits/stdc++.h>
using namespace std;
  //x=639,y=479

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
	     setlinestyle(0,0,10);
	     setfillstyle(SOLID_FILL,BLACK);
	     bar(100,100,250,400);

	     setcolor(WHITE);
	     rectangle(118,125,230,210);
	     setfillstyle(SOLID_FILL,WHITE);
	     floodfill(130,150,WHITE);

         rectangle(118,230,230,375);
	     //setfillstyle(SOLID_FILL,WHITE);
         //floodfill(120,370,WHITE);

	     //line(150,208,150,350);
	     //line(200,208,200,350);
	     //line(100,250,250,250);
	     //line(100,285,250,285);
	     //line(100,318,250,318);
	     //line(240,100,240,50);


	     //bar(100,345,250,355);
	     //bar(101,200,249,220);




	       getch();
	   closegraph();
	   return 0;
}
