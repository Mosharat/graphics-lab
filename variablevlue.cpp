#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main()
{
 int gd = DETECT;
 int gm;

    initgraph(&gd, &gm, " ");

    int x=8,y=6;
    char arr[10],a[10];
    sprintf(arr,"%d",x); //shows number which is "8"
    printf(a,"%d",y); //shows value of number
    outtextxy(20,20,arr);

    outtextxy(55,20,a);

    outtextxy(100,20,"8");


     getch();
    closegraph();
    return 0;
}
