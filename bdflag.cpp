#include<graphics.h>

main(){
int gd = DETECT,gm,left=100,top=100,right=200,bottom=200,
x=150, y=150,radius=20;

initgraph(&gd, &gm, "C:\\TC\\BGI");

setfillstyle(SOLID_FILL, BLACK);
rectangle(90, top, 100, bottom+30);

setfillstyle(SOLID_FILL, GREEN);
rectangle(left, top, right, bottom);

setfillstyle(SOLID_FILL, RED);
circle(x, y, radius);

getch();
closegraph();

}
