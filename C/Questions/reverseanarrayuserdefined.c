#include<stdio.h>
int main()
{
    int n;
    printf("enter the no of digits to reversed:");
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("elements in reverse order \n");
    for(i=n-1;i>=0;i--)
        printf("%d ",a[i]);
    return 0;
}