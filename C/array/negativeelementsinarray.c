#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int a[100],n,i,j,temp,c=0;
    printf("enter the amount of elements:");
    scanf("%d",&n);
    printf("enter the no of elements:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++){
        if (a[i]<0)
        {
            printf("%d\n",a[i]);
            c++;
        }
    }
    printf("the no of negative elements is:%d",c);
    return 0;
}