#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int lastdigit=0;
    while (n!=0)
    {
        lastdigit=n%10;{
        if (lastdigit%2==0)
        sum+=lastdigit;
        n/=10;
    }}
    printf("the sum of even is %d",sum);
}

