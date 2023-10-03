#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        int a=i-1;
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
    for (int k=1;k<=i;k++){
        printf("%c",64+k);
    }
    for (int m=1;m<=i-1;m++){
        printf("%c",64+a);
        a--;
    }
    printf("\n");
    }
}
