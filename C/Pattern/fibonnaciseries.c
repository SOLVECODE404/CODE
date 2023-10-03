#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j,temp,sum;
    printf("enter the no:");
    scanf("%d",&n);
    int t1=0,t2=1;
    printf("the fibonacci series %d,%d",t1,t2);
    int nextterm=t1+t2;
    for (i=1;i<=n;++i)
    {
        printf(",%d",nextterm);
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;
    }
    printf("\n");
    printf("%d\n",t2-1);
    return 0;
}