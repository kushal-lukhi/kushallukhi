#include<stdio.h>
#include<conio.h>

main()

{
int a;
clrscr();
printf("value of a :");
scanf("%d",&a);

if(a<0)
{
printf("%d is nagetive");

}
else if(a==0)
{
printf("%d is neutral");
}
else
{
printf("%d is positive");

}

getch();
}
