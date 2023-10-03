#include<stdio.h>
int main()
{
    int arr[10]={0};
    int n;
    printf("enter the no:");
    scanf("%d",&n);

    int rem;
    while(n>0)
        {
            rem=rem%10;
            if (arr[rem]==1)
                break;
            arr[rem]=1;
            n=n/10;
        }
        if (n>0)
            printf("yes");
        else
            printf("no");        
}