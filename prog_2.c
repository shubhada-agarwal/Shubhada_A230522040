#include<stdio.h>
int main()
{
    int n;
    n=100;
    int i;
    printf("\neven numbers\n");
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d  ",i);
        }
        else
        {
            printf(" ");
        }
    }
    return 0;
}

