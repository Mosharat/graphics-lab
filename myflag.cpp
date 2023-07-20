#include<graphics.h>
#include<conio.h>
main(){
int driver,mode;
driver=DETECT;
mode=0;


initgraph(&driver,&mode,"");

rectangle(100,100,400,250);
setfillstyle(SOLID_FILL,GREEN);
floodfill(200,200,WHITE);
circle(250,175,50);
setfillstyle(SOLID_FILL,RED);
floodfill(250,175,WHITE);
rectangle(70,100,100,400);
setfillstyle(SOLID_FILL,BLUE);
floodfill(80,300,WHITE);
rectangle(40,400,130,430);
setfillstyle(SOLID_FILL,BLUE);
floodfill(80,410,WHITE);



getch();
closegraph();
}
