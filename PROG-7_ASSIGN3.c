#include<stdio.h>
int fact1(int n1)
{
    int fact=1;
    int i;
    for(i=1;i<=n1;i++)
    {
        fact=fact*i;
    }
    return fact;
    }

int stnum(int n1)
{
    int n;
    n=n1;
    int r,p;
    int s=0;
   while(n!=0)
    {
        r=n%10;
        p=fact1(r);
        s=s+p;
        n=n/10;
    }
   if(s==n1)
   {
       printf("%d is  strong number\n",n1);
   } 
}
int main()
{
    int n1,num;
    int r,p;
    int s=0;
     printf("\nEnter the number\n");
    scanf("%d",&num);
   int i;
   for(i=1;i<=num;i++)
   {
       stnum(i);
   }
  
  
    return 0;
}

