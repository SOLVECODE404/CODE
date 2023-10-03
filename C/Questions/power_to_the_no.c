#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int m;
    int n;
    long long int val=1;
    printf("enter the no:");
    scanf("%d %d",&n,&m);
    for (int i = 0; i < m; i++)
    {
        val*=n;
    }
    printf("the value of %d to the power of %d is %lld\n",m,n, val);
    
    return 0;
}