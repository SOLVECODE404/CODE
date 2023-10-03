#include<stdio.h>
#include<math.h>
#include<string.h>
int isprime(int n)
{
    for (int i = 2; i*i <=n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n1,n2;
    printf("enter the no:");
    scanf("%d",&n1);
    printf("enter the no:");
    scanf("%d",&n2);
    printf("the range between %d and %d is:",n1,n2);
    for (int i=n1;i<=n2;i++)
    {
        if (isprime(i)){
            printf("%d ",i);} 
    }
    
    return 0;
}