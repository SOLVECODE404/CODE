#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,m,power=1;
    scanf("%d %d",&n,&m);
    for (i=1;i<=m;i++)
    {
        power=power*i;
    }
    printf("the power  is %d",power);
}