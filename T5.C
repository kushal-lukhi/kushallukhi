#include<stdio.h>
#include<conio.h>
main()
{

   float x,y,a;
   clrscr();
   printf("x=");
   scanf("%f",&x);
   printf("y=");
   scanf("%f",&y);

   a=x*x*x+y*y*y+3*x*x*y+3*y*x*x;
   printf("A= %f",a);
   getch();
   }