#include<stdio.h>
#include<conio.h>

main()
{
  int x,y,ans;
  clrscr();
  printf("x=",x);
  scanf("%d",&x);
  printf("y=",y);
  scanf("%d",&y);
  ans=x*x*x+y*y*y+2*x*x*y+2*x*y*y;
  printf("ans= %d",ans);


  getch();
		 }