#include<stdio.h>
int main()
{
    int n;
    printf("\nenter the number of terms\n");
    scanf("%d",&n);
    int p;
    //int s=0;
   // n=100;
    int i;
    for(i=1;i<=10;i++)
    {
        p=n*i;

         printf("\n%d * %d =%d",n,i,p);
        printf("\n");
    }

    return 0;
}


