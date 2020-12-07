#include<stdio.h>
int fact1(int n1)
{
    int endval=(n1/2);
    int i;
    for(i=1;i<=endval;i++)
    {
        if(n1%i==0)
        {
            prime1(i);
        }
        else
        {
            printf(" ");
        }
    }

}

int prime1(int x)
{
   int j;
   j=2;
   while(j<=(x-1))
  { if(x%j==0)
   {
       printf(" ");
       break;
   }
   j++;
}
   if(x==j)
   {
      printf("%d ",x); 
   }
   
}

int main()
{
    int n1;
    int p;
    printf("\nEnter the number\n");
    scanf("%d",&n1);

    printf("\nprime factors\n");
     p=fact1(n1);
    return 0;
}

