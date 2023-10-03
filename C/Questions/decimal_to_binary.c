#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n;
    printf("enter the no:");
    scanf("%d",&n);
    int rem;
    int arr[10];
    int i=0;
    if (n==0)
    {
        printf("%d",n);
    }
    while(n)
    {
        rem=n%2;
        n=n/2;
        arr[i]=rem;
        i++;
    }
    for (int j=i-1;j>=0;j--){

        printf("%d",arr[j]);
    }
    
    return 0;
}