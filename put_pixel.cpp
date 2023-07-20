#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

     int main( )
	 {
	     /* request auto detection */
	     int gdriver = DETECT, gmode, errorcode;

	    /* initialize graphics and local variables */
	     initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	     putpixel(200,300,7);

	      getch();
	   closegraph();
	   return 0;
}

