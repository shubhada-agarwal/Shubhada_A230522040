#include<stdio.h>
int main()
{
    int num;
     printf("\nEnter the weekday number(1-7)\n");
    scanf("%d",&num);
   int i;
   switch(num)
   {
       case 1:
       {
           printf("\nSunday\n");
           break;
       }
       case 2:
       {
           printf("\nMonday\n");
            break;
       }
        case 3:
       {
           printf("\nTuesday\n");
            break;
       }
        case 4:
       {
           printf("\nWednesday\n");
            break;
       }
        case 5:
       {
           printf("\nThursday\n");
            break;
       }
       case 6:
       {
           printf("\nFriday\n");
            break;
       }
       case 7:
       {
           printf("\nSaturday\n");
            break;
       }
   }
  
  
    return 0;
}

