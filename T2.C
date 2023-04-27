#include<stdio.h>
#include<conio.h>
main()
{
  float cel,fer;
   clrscr();
   printf("FER=");
   scanf("%f",&fer);

   cel=(fer-32)*5/9;

   printf("temp in cel is : %f",cel);


getch();
}