/* is a number in which the sum of factorial of 
individual digits of a number is equal 
to the original number */
#include<stdio.h>
int main()
{
    int n,q,rem,fact=1,i,result=0;
    printf("enter the no: ");
    scanf("%d",&n);
    q=n;
    while(q!=0)
    { 
        rem=q%10;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        result=result+fact;
        fact=1;
        q=q/10;
    }
    if (result==n)
        printf("strong no: %d",n);
    else
        printf("not strong no: %d",n);
    return 0;
}