#include<stdio.h>
#include<conio.h>
main()
{

   float x,y,z,a;
   clrscr();
   printf("x=");
   scanf("%f",&x);
   printf("y=");
   scanf("%f",&y);
   printf("z=");
   scanf("%f",&z);

   a=x*x+y*y+z*z+2*(x*y+y*z+z*x);
   printf("A= %f",a);






getch();
}