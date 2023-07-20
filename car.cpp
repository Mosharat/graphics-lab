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
	     int point[8]={100,200,130,140,280,140,310,200};
	     drawpoly(4,point);

	     int point2[8]={80,230,100,210,310,210,330,230};
	     drawpoly(4,point2);
	     rectangle(75,230,335,280);
	     rectangle(150,240,250,260);
	     circle(105,247,10);
	     circle(305,247,10);
	     ellipse(105,280,180,360,20,25);
	      ellipse(305,280,180,360,20,25);
	      rectangle(50,190,85,210);
	      rectangle(325,190,360,210);


          getch();
	   closegraph();
	   return 0;
}
