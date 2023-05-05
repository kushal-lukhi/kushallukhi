#include<stdio.h>
#include<conio.h>
main()
{
int a;
int b;
int c;
clrscr();
printf("enter value of a :");
scanf("%d",&a);
printf("enter value of b ;");
scanf("%d",&b);
printf("enter value of c :");
scanf("%d",&c);
if (a<b)
{
	      if(a<c)
	     {
	      printf("a is min");
	      }
	      else
	      {
	      printf("c is min");
	      }
}
else
{
	      if(b<c)
	      {
	      printf("bis min");
	      }
	       else
	       {
	       printf("cis min");
	       }
}
getch();
}
