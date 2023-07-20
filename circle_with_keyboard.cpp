#include <graphics.h>
#include <conio.h>
#include <stdio.h>
int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");


    int x1 = 100, y1 = 200, x2 = 250, y2 = 300, b, a[100];

    sprintf(a,"%d",b);
    outtextxy(50,20,b);
     rectangle(x1, y1, x2, y2);
        rectangle(x1*b, y1*b, x2*b, y2*b);
        cleardevice();

    closegraph();
    return 0;
}

