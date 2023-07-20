#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

  //x=639,y=479


int main(){
int gd,gm;
gd=DETECT;

initgraph(&gd,&gm,"");

int X = getmaxx();
int Y = getmaxy();

   printf("%d %d",X,Y);

getch();
closegraph();
}
