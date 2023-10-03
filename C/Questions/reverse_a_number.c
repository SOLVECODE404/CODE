#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int a;
    int rev=0;
    int rem;
    printf("enter the no:");
    scanf("%d",&a);
    while (a!=0)
    
    {
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    printf("%d",rev);
    return 0;
}