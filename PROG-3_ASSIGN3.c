#include<stdio.h>
int main()
{
int n1,n2;
int big;
int lcm;
int i;
int flag=1;
printf("Enter two nos whose LCM to be found\n");
scanf("%d %d",&n1,&n2);
big=(n1>n2)?n1:n2;

i=big;
while(flag==1)
{
if(i%n1 == 0 && i%n2 == 0)
{
    lcm=i;

    printf("\n lcm is \n%d",lcm);break;
}
i++;
}
return 0;
}
