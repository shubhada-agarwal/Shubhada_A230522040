/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char str[78];
printf("Enter hex no");
gets(str);
int i;
int d;
int k;
k=strlen(str);
printf("%d",k);
int a;
int s=0;
for(i=0;str[i]!='\0';i++)
{
    switch(str[i])
    {
        case 'A':
        {
            d=10;
            break;
        }
        case 'B':
        {
            d=11;
            break;
        }
        case 'C':
        {
            d=12;
            break;
            
        }
         case 'D':
        {
            d=13;
            break;
            
        }
         case 'E':
        {
            d=14;
            break;
            
        }
         case 'F':
        {
            d=15;
            break;
            
        }
        default:
        {d=str[i]-48;
        break;}
    }printf("%d",d);
    a=pow(16,(k-1));
    k=k-1;
    s=s+(d*a);
    
}
printf("\nonertion of hexadecimal to decimal\n=%d",s);
    return 0;
}
