#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int sum(int n){
    if (n==1||n==0) return 1;
    int ans= n+sum(n-1);
    return ans;}
int main()
{
    int n,i,j;
    scanf("%d",&n);
    i=sum(n);
    printf("%d",i);
}