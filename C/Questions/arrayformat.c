#include<stdio.h>
#define N 4
int main()
    {
    int a[N],i;
    for(i=0;i<N;i++)
    {
    printf("enter the no %d:",i);
    scanf("%d",&a[i]);
    }
    printf("\n array elemetns:\n");
    for(i=0;i<N;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}