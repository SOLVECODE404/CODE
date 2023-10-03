#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for (i=n;i>=1;i--){for(j=1;j<=i;j++){printf("%d",j);}printf("\n");}
}