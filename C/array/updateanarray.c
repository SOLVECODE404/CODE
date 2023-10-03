#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int a[20],n,i,value,index;
    printf("enter the array size:");
    scanf("%d",&n);
    printf("enter the no of elements:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    } 
    printf("enter the index you want to update:");
    scanf("%d",&index);
    printf("enter the value:");
    scanf("%d",&value);
    a[index-1]=value;
    printf("the updated array is:");
    for (i=0;i<n;i++)
    printf("%d ",a[i]);
}