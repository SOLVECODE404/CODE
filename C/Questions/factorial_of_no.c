#include<stdio.h>
#include<math.h>
#include<string.h>
//recursive method
int fact(int n)
{
     if (n==1||n==0)
        {return 1;}
    else
        {return n*fact(n-1);}
}
int main()
{
    int n,m;
    printf("enter the no:");
    scanf("%d",&n);
    //recursive method
    int factorial=fact(n);
    printf("%d",factorial);
    //Iteration method//
    // int val=1;
    // for (int  i = n; i >1 ; i--)
    // {
    //     val*=i;
    // }
    // printf("%d",val);
    return 0;
}