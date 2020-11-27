#include<stdio.h>
int main()
{
    int r,r1;
    int n1,n;
    int s=0;
    printf("\nenter the number\n");
    scanf("%d",&n);

    n1=n;
    int c1=0;
r1=n1/10;
    while(n1!=0)
    {
        r=n1%10;
        c1=c1+1;
        n1=n1/10;
    }
printf("\number is=%d",n);
printf("\n");
    printf("\nNo of digits\n=%d",c1);
    return 0;
}
