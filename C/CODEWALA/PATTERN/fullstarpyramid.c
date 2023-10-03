#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
// int main()
// {
//     int n,i,j;
//     scanf("%d",&n);
//     for (i=1;i<=n;i++){
//         for(j=1;j<=n-i;j++){
//             printf(" ");
//         }
//     for (int k=1;k<=2*i-1;k++){
//         printf("*");
//     }
//     printf("\n");
//     }
//     for(i=n-1;i>=1;i--){
//         for (j=1;j<=n-i;j++){
//         printf(" ");}
//         for (int k=1;k<=2*i-1;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

int main(){
    int n,i,j,k;
    scanf("%d",&n);
    int nsp=n/2;
    int nst=1;
    int ml=n/2+1;
    for (i=1;i<=n;i++){
        for (j=1;j<=nsp;j++){
            printf(" ");
        }
        for (k=1;k<=nst;k++){
            printf("*");
        }
        if (i<ml){nsp--;
        nst+=2; }
        else {
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
}