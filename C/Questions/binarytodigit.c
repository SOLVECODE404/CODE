#include<stdio.h>
int main()
{
    int decimal=0,binary,base=1,rem,num;
    printf("enter the binary no:");
    scanf("%d",&binary);
    num=binary;
    while(binary!=0)
    {
        rem=binary%10;
        decimal=decimal+rem*base;
        binary=binary/10;
        base=base*2;
    }
    printf("binary equailent of %d is %d",num,decimal);
    return 0;
}