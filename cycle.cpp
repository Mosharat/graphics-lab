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

         circle(200,300,70);
         circle(450,300,70);
         circle(325,300,20);
         line(200,300,263,150);
         line(200,300,305,300);
         line(315,283,250,110);
         line(230,110,270,110);
         line(450,300,380,110);
         line(380,110,400,90);
         line(335,283,395,150);




	       getch();
	   closegraph();
	   return 0;
}
