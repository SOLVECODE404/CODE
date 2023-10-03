#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int a[]={2,4,-3,0,7};
    int *p=a;
    int *q=&a[3];
    printf("%d\n",q-p);
    printf("%d",p-q);
    printf("value= %d\n",*q);
    q=q-2;
    printf("%d\n",*q);
    p=p+2;
    printf("%d ",q-p);
}