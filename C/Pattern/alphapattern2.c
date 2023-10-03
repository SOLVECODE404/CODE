#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j;
    printf("enter the no:");
    scanf("%d",&n);
    for (i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++){
            printf("%c",64+j);
        }
        printf("\n");
    }
    return 0;
}