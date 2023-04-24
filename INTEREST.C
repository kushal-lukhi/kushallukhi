#include<stdio.h>
#include<conio.h>
main()
{


 int p,r,t,interest;

 clrscr();
 printf("amount=");
 scanf("%d",&p);
 printf("rate=");
 scanf("%d",&r);
  printf("time=");
 scanf("%d",&t);
interest=(p*r*t)/100;
 printf("intrest is =%d",interest);
 getch();
}