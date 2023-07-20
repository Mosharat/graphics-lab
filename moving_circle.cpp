#include<graphics.h>
#include<stdio.h>

int main()
{
    int gd=DETECT;
    int gm;
    int i,j;
    char ch;
    printf("Enter character\n");
    scanf("%c",&ch);
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    if(ch=='l'){
        for(i=0;i<=300;i++)
        {
            circle(300-i,200,50);

            delay(10);
            cleardevice();
        }
    }
    else if(ch=='r')
    {
         for(i=0;i<=300;i++)
        {
            circle(300+i,200,50);

            delay(10);
            cleardevice();
        }
    }
     else if(ch=='u')
    {
         for(i=0;i<=300;i++)
        {
            circle(300,200-i,50);

            delay(10);
            cleardevice();
        }
    }
     else if(ch=='d')
    {
         for(i=0;i<=300;i++)
        {
            circle(300,200+i,50);

            delay(10);
            cleardevice();
        }
    }



    getch();
    closegraph();
}
