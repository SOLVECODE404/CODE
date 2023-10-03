#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
// only can go downward or right not left or upward...  

// first method...

// int maze(int cr,int cc,int er,int ec){
//     int downways=0;
//     int rightways=0;
//     if (cr==er && cc==ec) return 1;
//     if (cr==er){
//         rightways+=maze(cr,cc+1,er,ec);
//     }
//     if (cc==ec){
//         downways+=maze(cr+1,cc,er,ec);
//     }
//     if (cr<er && cc<ec) {
//         rightways +=maze(cr,cc+1,er,ec);
//         downways +=maze(cr+1,cc,er,ec);
//     }
//     int totalways=rightways+downways;
//     return totalways;
// }

// second method ...

int maze(int n,int m){
    int rightways=0;
    int downways=0;
    if (n==1 && m==1) return 1;
    if (n==1){
        rightways+=maze(n,m-1);
    }
    if (m==1){
        downways+=maze(n-1,m);
    }
    if (n>1 && m>1){
        rightways+=maze(n,m-1);
        downways+=maze(n-1,m);
    }
    int res=rightways+downways;
    return res;
}
int main()
{
    int n;
    printf("enter the no of rows:");
    scanf("%d",&n);
    int m;
    printf("enter the no of columns:");
    scanf("%d",&m);
    // int cr,cc,er,ec;
    // printf("enter the starting row index :");
    // scanf("%d",&cr);
    // printf("enter the starting columns index:");
    // scanf("%d",&cc);
    // printf("enter the ending row index:");
    // scanf("%d",&er);
    // printf("enter the ending column index:");
    // scanf("%d",&ec);
    // int ans=maze(cr,cc,er,ec); ..for first method ..
    // for second ...method
    int ans=maze(n,m); 
    printf("%d\n",ans);
}