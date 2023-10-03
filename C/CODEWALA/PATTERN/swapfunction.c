#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int swap(int n,int r){
    // int temp=n;
    // n=r;
    // r=temp;
    n=n+r;
    r=n-r;
    n=n-r;
    printf("after swap:");
    printf("%d ",n);
    printf("%d",r);
}


int main()
{
    int n,i,j,m;
    printf("enter the no before swap:");
    scanf("%d %d",&n,&m);
    int sw=swap(n,m);
}