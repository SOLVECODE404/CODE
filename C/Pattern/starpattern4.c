#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j,space=1;
    printf("enter the no:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (space=1;space<=n-i;space++)
        {
            printf(" ");
        }
        for (j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}