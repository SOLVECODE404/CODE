#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
void swap(int*x,int*y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main()
{
    int n,i,j;
    scanf("%d %d",&n,&i);
    swap(&n,&i);
    printf("%d ",n);
    printf("%d",i);
}