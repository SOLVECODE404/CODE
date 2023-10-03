#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n;
    printf("enter the no:");
    scanf("%d",&n);
    int isprime=1;
    for (int i = 2; i*i < n; i++)
    {
        if (n%i==0)
            {isprime=0;}   
    }
    if (isprime){
        printf("prime\n");
    }
    else
        {printf("not prime\n");}
}    