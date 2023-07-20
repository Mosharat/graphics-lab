#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<bits/stdc++.h>
using namespace std;

     int main( )
	 {
	     /* request auto detection */
	     int gdriver = DETECT, gmode;

	    /* initialize graphics and local variables */
	     initgraph(&gdriver, &gmode, "");
	     setbkcolor(WHITE);
	     setcolor(BLACK);
	     cleardevice();
	     setlinestyle(0,0,8);
	     circle(200,200,90);
	     circle(160,165,25);
	     circle(240,165,25);
         line(160,230,240,230);

	     setcolor(BLACK);
	     circle(148,155,10);
	    setfillstyle(SOLID_FILL,BLACK);
         floodfill(148,155,BLACK);

         setcolor(BLACK);
	     circle(228,155,10);
	     setfillstyle(SOLID_FILL,BLACK);
         floodfill(228,155,BLACK);


          getch();
	   closegraph();
	   return 0;
}
