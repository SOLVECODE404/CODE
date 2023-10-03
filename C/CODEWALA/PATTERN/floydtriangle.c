#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a=1;
    for (i=1;i<=n;i++){
        
    for(j=1;j<=i;j++){
        printf("%d",a);
        a=a+2;
    }printf("\n");
    }
}