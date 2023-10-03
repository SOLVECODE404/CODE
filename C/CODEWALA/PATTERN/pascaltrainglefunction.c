#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int fact(int n){
    int factorial=1;
    for (int i=2;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}
int combination(int n,int r){
    int comb=fact(n)/(fact(r)*fact(n-r));
    return comb;
}
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for (i=0;i<=n;i++){for (j=0;j<=i;j++){int ncr=combination(i,j);printf("%d ",ncr);}printf("\n"); }
}