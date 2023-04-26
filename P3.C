#include<stdio.h>
#include<conio.h>

main()
{
   int firstangle,secondangle,thirdangle;
   clrscr();
   printf("FIRSTANGLE=");
   scanf("%d",&firstangle);

   printf("SECONDANGLE=");
   scanf("%d",&secondangle);
   thirdangle=180-firstangle-secondangle;


   printf("THIRDANGLE = %d",thirdangle);

getch();
}
