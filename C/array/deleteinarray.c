#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int a[20],n,i,position,value;
    printf("enter the no of elements you want:");
    scanf("%d",&n);
    printf("enter the elements in array:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the position at which you wnt to delete:");
    scanf("%d",&position);
    if (position>=n+1)
    {
        printf("deletion is not possible");
    }
    else{
        for (i=position-1;i<n-1;i++)
        a[i]=a[i+1];
        printf("resultant array is:");
        for (i=0;i<n-1;i++)
        printf("%d ",a[i]);
    }
    return 0;
}