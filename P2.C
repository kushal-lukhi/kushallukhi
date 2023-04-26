#include<stdio.h>
#include<conio.h>

main()
{
   int base_salary,hra,da,ta,gross_salary;
   clrscr();
   printf("basa_salary=");
   scanf("%d",&base_salary);

   printf("hra=");
   scanf("%d,",&hra);

   printf("da=");
   scanf("%d",&da);

   printf("ta=");
   scanf("%d",&ta);

   gross_salary=base_salary+hra+da+ta;

   printf("%d",&gross_salary);

getch();
}
