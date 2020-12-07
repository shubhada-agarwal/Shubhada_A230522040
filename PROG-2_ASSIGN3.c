#include<stdio.h>
int fact1(int n1)
{
    int endval=(n1/2);
    int i;
    for(i=1;i<=endval;i++)
    {
        if(n1%i==0)
        {
            printf("%d ",i);
        }
        else
        {
            printf(" ");
        }
    }
printf("%d ",n1);
}

int main()
{
    int n1;
    int p;
    printf("\nEnter the number\n");
    scanf("%d",&n1);

    printf("\nFACTORs OF A NUMBER ");
     p=fact1(n1);
    return 0;
}

