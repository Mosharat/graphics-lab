#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main() {
   int gd = DETECT, gm, n,a,b;
   initgraph(&gd, &gm, "");

   while(1)
   {
       rectangle(50,50,100,100);
       printf("Enter_number\n");

       if(scanf("%d",&n)){
            a=50;
       b=50;
      rectangle(150,50,150+a*n,50+b*n);
       }
   }

   getch();
   closegraph();

   return 0;
}





