#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a=1;
    int b=1;
    printf("%d,%d",a,b);
    int sum=1;
    for (i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
        printf(",%d",sum);
    }
    printf("\n");
    printf("the %dth term of fibonaaci series is%d\n ",n,sum);
}