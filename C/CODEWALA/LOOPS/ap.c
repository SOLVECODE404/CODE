#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a=0;
    for (i=2;i<=n-1;i++)
    {
        
        if (n%i==0)
        {
            a=1;
            break;
        }
    }
    if (n==1) printf("the no 1 is neither prime nor compiste");
    else if(a==0) printf("the given no is prime\n");
    else printf("the given no is composite\n");
}