#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int min(int n,int r){
    if (n<r) return n;
    else return r;
}
int gcd(int n,int r){
    int gcf;
    for (int i=min(n,r);i>=1;i--){if (n%i==0&&r%i==0){gcf=i;break;}}return gcf;
}
int main()
{
    int n,i;
    scanf("%d %d",&n,&i);
    int gmd=gcd(n,i);
    printf("the hcf of %d and %d is %d",n,i,gmd);

}