#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for (j=1;j<=n-i;j++){
            printf(" ");
        }
    for (int k=1;k<=n;k++){
        printf("*");
    }
    printf("\n");
    }
}