#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int nsp=1;
    int nst=n;
    for (i=1;i<=2*n+1;i++){
        printf("%d",i);
    }
    printf("\n");
    for (i=1;i<=n;i++){
        for(j=1;j<=nst;j++){
            printf("%d",j);
        }
        for (int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(j=1;j<=nst;j++){
            printf("%d",i+j+n);}
        nst--;
        nsp+=2;
        printf("\n");
        }
}