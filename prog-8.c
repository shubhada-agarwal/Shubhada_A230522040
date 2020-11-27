#include<stdio.h>
int main()
{
    int r;
    int c0=0;
    int c1=0;
    int c2=0;
    int c3=0;
    int c4=0;
    int c5=0;
    int c6=0;
    int c7=0;
    int c8=0;
    int c9=0;
    long int n1,n;
    int s=0;
    printf("\nenter the number\n");
    scanf("%ld",&n);

    n1=n;


    while(n1!=0)
    {
        r=n1%10;
        switch(r)
        {
        case 0:
        c0++;
        break;
case 1:
        c1++;
        break;
    case 2:
        c2++;
        break;
    case 3:
        c3++;
        break;
        case 4:
        c4++;
        break;
        case 5:
        c5++;
        break;
        case 6:
        c6++;
        break;

        case 7:
        c7++;
        break;

        case 8:
        c8++;
        break;
        case 9:
        c9++;
        break;


        }

        n1=n1/10;
    }
printf("\number is=%d",n);
printf("\n");
    printf("\nNo of 0 =%d",c0);

    printf("\nNo of 1 =%d",c1);
    printf("\nNo of 2 =%d",c2);
    printf("\nNo of 3 =%d",c3);
    printf("\nNo of 4 =%d",c4);
    printf("\nNo of 5 =%d",c5);
    printf("\nNo of 6 =%d",c6);
    printf("\nNo of 7 =%d",c7);
    printf("\nNo of 8 =%d",c8);
    printf("\nNo of 9 =%d",c9);




    return 0;
}
