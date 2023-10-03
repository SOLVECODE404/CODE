#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int a[20],n,i,item;
    printf("enter the size:");
    scanf("%d",&n);
    printf("enter the item:");
    scanf("%d",&item);
    printf("enter the elements in array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        if (a[i]==item)
        {
            printf("item found");
        }
    }
    if (i==n)
    {
        printf("not found");
    }
    return 0;
}