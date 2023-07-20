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

         rectangle(100,100,400,250);
         rectangle(200,50,300,100);
         circle(160,180,40);
         circle(340,180,40);
         circle(160,180,15);
         circle(340,180,15);
         rectangle(220,160,280,200);
         line(220,145,280,145);
         line(220,215,280,215);
         setfillstyle(BKSLASH_FILL,LIGHTGRAY);
         floodfill(370,170,BLACK);
         setfillstyle(BKSLASH_FILL,LIGHTGRAY);
         floodfill(130,170,BLACK);
         setfillstyle(BKSLASH_FILL,LIGHTGRAY);
         floodfill(340,180,BLACK);
         setfillstyle(BKSLASH_FILL,LIGHTGRAY);
         floodfill(160,180,BLACK);
         setfillstyle(BKSLASH_FILL,LIGHTGRAY);
         floodfill(230,170,BLACK);
         setfillstyle(BKSLASH_FILL,LIGHTGRAY);
         floodfill(250,60,BLACK);
         setfillstyle(BKSLASH_FILL,LIGHTGRAY);
         floodfill(200,200,BLACK);
         setfillstyle(BKSLASH_FILL,LIGHTGRAY);
         floodfill(400,400,BLACK);


         getch();
	   closegraph();
	   return 0;
}
