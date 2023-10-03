#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int *p,*q;
    int a=10,b=10;
    p=&a;
    q=&b;
    printf("the value of a=%d\n",a);
    printf("the value of a=%d\n",*p);
    printf("the adress of a=%x\n",p);
    printf("the adress of a=%x\n",&a);
    return 0;
}