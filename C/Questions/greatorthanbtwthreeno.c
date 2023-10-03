#include<stdio.h>
int main()
{
    int a,b,c,z;
    printf("enter the first no:");
    scanf("%d",&a);
    printf("enter the second no:");
    scanf("%d",&b);
    printf("enter the third no:");
    scanf("%d",&c);
    z=(a>b&&a>c)?a:(b>c)?b:c;
    printf("\n%d",z);
}