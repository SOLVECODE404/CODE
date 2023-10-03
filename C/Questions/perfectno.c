/* perfect no is a positive no that is 
equal to the sum of all its proper positive divisors 
excluding the no itslef */
#include<stdio.h>
int main()
{
    int n,i,rem,sum=0;
    printf("enter the no:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        rem=n%i;
        if(rem==0)
        {
            sum+=i;
        }
        
    }
    if (sum==n)
        printf("%d is a perfect no",n);
    else
        printf("%d is not a perfect no",n);

}