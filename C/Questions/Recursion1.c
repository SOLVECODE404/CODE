#include<stdio.h>
int fact(int n)
{
    if (n==1)
        return 1;
    else 
        return n*fact(n-1);
}
int main()
{
    int n;
    printf("enter the no:");
    scanf("%d",&n);
    printf("Factorial of %d is %d ",n,fact(n));
}

/* answer is 25 as per the times the code 
will execute */