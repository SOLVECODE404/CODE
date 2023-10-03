#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
void increasing(int n){
    if (n==0) return;
    printf("the decreasing pattern is%d\n",n);
    increasing(n-1);
    printf("\n");
    printf("the increasing pattern is%d",n);
    return;
}
int main()
{
    int n,i,j;
    scanf("%d",&n);
    increasing(n);
    
}