#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int arr[5],i,sum,avg;
    printf("enter the elements:");
    for (i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    avg=sum/5;
    printf("%d\n",sum);
    printf("%d\n",avg);
    return 0;
}