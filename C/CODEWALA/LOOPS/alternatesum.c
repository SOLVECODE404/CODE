#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j,sum=0;
    scanf("%d",&n);
    // for (i=1;i<=n;i++){
    //     if(i%2!=0)
    //         sum+=i;
    //     else
    //         sum-=i;
    // }
    if (n%2==0) sum=-n/2;
    else  sum=-n/2+n;
    printf("%d",sum);
}