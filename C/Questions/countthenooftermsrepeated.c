#include<stdio.h>
int main()
{
    int n;
    printf("enter the no of array:");
    scanf("%d",&n);
    int count=0;
    int i,maxcount=0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
            count+=1;
        maxcount=count;
        {
        if (maxcount>count){
            printf("%d",a[i]);}
        }
    }
}
    