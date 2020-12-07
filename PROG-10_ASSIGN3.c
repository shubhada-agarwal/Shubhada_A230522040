/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int m[40];
int n=5;
int i;
int s=0;
float avg;
float perc1;
printf("\nenter the 1D array of 5 subjects\n");
for(i=0;i<5;i++)
{
    scanf("%d",&m[i]);
}
printf("\n1D ARRAY FOR 5 SUBJECTS \n");
for(i=0;i<5;i++)
{
printf("%d ",m[i]);
s=s+m[i];

}

avg=(s)/500.0;
printf("%5.2f",avg);
perc1=(avg)*100;
printf("%5.2f",perc1);

if(perc1>=90.0)
{
    printf("GRADE='A' ");
    printf("\n");
}
else if(perc1>=80.0)
{
    printf("GRADE='B' ");
    printf("\n");
}
else if(perc1>=70.0)
{
     printf("GRADE='C' ");
    printf("\n");
}
else if(perc1>=60.0)
{
      printf("GRADE='D' ");
    printf("\n");
}
else if(perc1>=40.0)
{
      printf("GRADE='E' ");
    printf("\n");
}
else if(perc1<40.0)
{
      printf("GRADE='F' ");
    printf("\n");
}
    return 0;
}
