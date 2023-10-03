#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int a=10,b=11;
    int *p,*q;
    p=&a;
    q=&b;
    *q=*p;
    printf("the value of b is %d\n",*q);

    printf("the value of a is %d\n:",*p);
    return 0;
}