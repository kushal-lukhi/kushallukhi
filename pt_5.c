#include<stdio.h>
#include<conio.h>
main()
{
	
int a;
int b;
int c;



  printf("enter value of a :");
  scanf("%d",&a);
  printf("enter value of b ;");
  scanf("%d",&b);
  printf("enter value of c :");
  scanf("%d",&c);
  
  
  
   
   if(a==b&&b==c&&a==c)
      printf("all are same ....");
      
      
   else
   
     if(a==b)
        printf("a and b are same ...");
     else if (b==c)
        printf("b and c are same...");
     else if (a==c)
        printf("a ang c are same...");
     else
   {

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
}
}
