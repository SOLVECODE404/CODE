#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int fact=1;
    for (i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("%d",fact);
}