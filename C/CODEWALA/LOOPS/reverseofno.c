#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j,r,sum;
    scanf("%d",&n);
    while(n>0){
    r=r*10+n%10;
    n/=10;
    }
    printf("%d\n",r);
    // printf("%d\n",sum);
}