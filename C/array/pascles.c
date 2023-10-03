#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int fact(int a){
    int sm = 1; 
    for(int i = 1; i<=a; i++) sm *= i;
    return sm;
}

int nCr(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}

int main()
{
    int base_number; scanf("%d", &base_number);
    for(int i = 0; i<=base_number; i++){
        for(int j = base_number-(i+1); j>=0; j--) printf(" ");
        for(int j = 0; j<=i; j++) printf("%d ", nCr(i,j));
        printf("\n");
    }
    return 0;
}