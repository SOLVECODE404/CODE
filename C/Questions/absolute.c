#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j;
    printf("enter the no:");
    scanf("%d",&n);
    if (n<0){
        n=n*(-1);
    }
    printf("the absolute value is %d ",n);
}