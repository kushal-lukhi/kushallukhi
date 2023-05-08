#include<stdio.h>
#include<conio.h>
main()
{
int choice,type;
clrscr();


printf("press 1 for english.\n");
printf("press 2 for hindi.\n");
printf("press 3 for gujarati.\n");

printf("enter your choice");
scanf("%d",&choice);

switch(choice)
{
     case 1:
     printf("press 1 for free data\n");
     printf("press 2 for internet recharge\n");
     printf("press 3 for disable your simcard\n");

     printf ("enter your choice ");
     scanf("%d",&type);

     switch(type)
     {
	       case 1: printf("you selected free data"); break;
	       case 2: printf("you selected internet recharge");break;
	       case 3: printf("you selected disable your simcard"); break;
	       default: printf("INVALIDE CHOICE");
     } break;

     case 2:
     printf("free data ke liye 1 dabaye\n");
     printf("internet recharge ke liye 2 dabaye\n");
     printf("simcard bandh karne ke liya 3 babaye\n");

     printf ("enter your choice ");
     scanf("%d",&type);

     switch(type)
     {
	       case 1: printf("aapne free data pasang kiya he"); break;
	       case 2: printf("aapne internet recharge pasand kiya he");break;
	       case 3: printf("aap simcard bandh karna chahteho"); break;
	       default: printf("INVALIDE CHOICE");
     } break;

      case 3:
     printf("free data mate 1 dabavo\n");
     printf("internet recharge mate 2 dabavo\n");
     printf("simcard bandh karva mate 3 dabavo\n");

     printf ("enter your choice ");
     scanf("%d",&type);

     switch(type)
     {
	       case 1: printf("tame free data pasand karyu chhe"); break;
	       case 2: printf("tame internet recharg pasand karyu chhe");break;
	       case 3: printf("tame simcar dbandh karva mango chho"); break;
	       default: printf("INVALIDE CHOICE");
     } break;

}



getch();
}
