#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int a[20],i=1,j=0,n,sum=0;
    printf("enter the no:");
    scanf("%d",&n);
    while (n!=0)
    {
        j=n%10;
        if (i%2==0)
        {
            sum+=j;
        }
        else{
            sum-=j;
        }
        n/=10;
        i++;
    }
    printf("%d",sum);
    return 0;
}