#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int arr[4],i;
    printf("enter the no of elements:");
    for (i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=3;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }
}