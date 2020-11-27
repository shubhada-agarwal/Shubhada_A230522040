#include<stdio.h>
int main()
{
    int n;
    printf("\nenter the number of terms\n");
    scanf("%d",&n);
    int s=0;
   // n=100;
    int i;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            s=s+i;
        }

    }
     printf("\nsum of odd numbers=%d",s);
        printf("\n");
    return 0;
}


