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

	     x1=250; y1=250;
	     x2=400; y2=450;

	     if((x2-x1)==0)
            m=(y2-y1);
         else
            m=(y2-y1)/(x2-x1);

    if(fabs(m)<1){

	     if(x1>x2){
            t=x1;
            x1=x2;
            x2=t;

            t=y1;
            y1=y2;
            y2=t;
	     }
	     dx=fabs(x2-x1);
	     dy=fabs(y2-y1);
	     d=2*dy-dx;
	     x=x1;
	     y=y1;

	     printf("Using Bresenham's Line Algorithm");
	     putpixel(x,y,7);

	     while(x<=x2)
		    {
			x=x+1;
			if(d<0){
                y=y;
			     d=d+2*dy;
			}
			 else
			     {
			         if(m<1)
				          y=y+1;
				      else
                            y=y-1;

				d=d+2*(dy-dx);
			     }
			putpixel(x,y,7);
		    }

       }


       if(m>=1){

	     if(y1>y2){
            t=x1;
            x1=x2;
            x2=t;

            t=y1;
            y1=y2;
            y2=t;
	     }
	     dx=fabs(x2-x1);
	     dy=fabs(y2-y1);
	     d=2*dx-dy;
	     x=x1;
	     y=y1;

	     printf("Using Bresenham's Line Algorithm");
	     putpixel(x,y,7);

	     while(y<=y2)
		    {
			y=y+1;
			if(d<0){
                 x=x;
			     d=d+2*dx;
			}
			else
			     {
			         if(m>=1)
				          x=x+1;
				      else
                            x=x-1;

				d=d+2*(dx-dy);
			     }
			putpixel(x,y,7);
		    }

       }

	       getch();
	   closegraph();
	   return 0;
}
