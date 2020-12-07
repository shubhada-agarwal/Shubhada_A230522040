#include<stdio.h>
int power(int b,int n1)
{
    int p1=1;
    int i;
    for(i=1;i<=n1;i++)
    {
        p1=b*p1;
    }
    return p1;
}

int main()
{
    int b;//base
    int p;
    printf("\nEnter the base of number\n");
    scanf("%d",&b);
    int n1;//power
      printf("\nEnter the power of number\n");
    scanf("%d",&n1);
    p=power(b,n1);
    printf("\nPower of base number=%d to %d=%d",b,n1,p);
    printf("\n");
    return 0;
}

