#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[10];
    for (i=0;n>0;i++){
        a[i]=n%2;
        n/=2;
    }
    for (i=i-1;i>=0;i--){
        printf("%d",a[i]);
    }
}