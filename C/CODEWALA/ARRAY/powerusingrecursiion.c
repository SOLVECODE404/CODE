#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int power(int n,int i){
    if (i==0) return 1;
    return n*power(n,i-1);
}
int main()
{
    int n,i,j;
    scanf("%d %d",&n,&i);
    j=power(n,i);
    printf("%d",j);
}