#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int arr[5],i;
    printf("enter the no of elemnts: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<5;i++)
    {
    printf("%d ",arr[i]);
    }
    return 0;
}