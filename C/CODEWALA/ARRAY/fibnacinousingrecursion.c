#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int fibo(int n){
    if(n==2||n==3)return 1;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    scanf("%d",&n);
    if(n==1)printf("0");
    else{
        fibo(n);
        printf("%d",fibo(n));
    }
}