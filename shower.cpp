#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<bits/stdc++.h>
using namespace std;

     int main( )
	 {
	     int x1,y1,x2,y2,dx,dy,ds,dt,d,x,y,c;
	     /* request auto detection */
	     int gdriver = DETECT, gmode, errorcode;

	    /* initialize graphics and local variables */
	     initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	     setbkcolor(WHITE);
	     setcolor(BLACK);
	     cleardevice();
	     setlinestyle(0,0,8);
	     arc(300,200,0,180,80);
	     line(220,200,380,200);
	     line(300,120,300,70);
	     line(300,70,200,70);
	     //floodfill(299,199,BLACK);

	     setlinestyle(3,0,10);
	     line(220,210,220,300);



	       getch();
	   closegraph();
	   return 0;
}
