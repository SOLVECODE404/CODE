#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j,sum=0,misnum;
    scanf("%d",&n);
    // scanf("%d",&x);
    // int flag=0,idx=-1;
    int s2=n*(n+1)/2;
    int a[n];
    for (i=0;i<n-1;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++){
        sum+=a[i];
    }
    misnum=s2-sum;
    printf("the missing no is %d",misnum);}
