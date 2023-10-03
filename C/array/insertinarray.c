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
    printf("enter the position at which you wnt:");
    scanf("%d",&position);
    printf("enter the value to insert:");
    scanf("%d",&value);
    for (i=n-1;i>=position;i--)
        a[i+1]=a[i];
        a[position]=value;
        printf("resultant is\n");
        for (i=0;i<=n;i++) 
        printf("%d ",a[i]); 
}