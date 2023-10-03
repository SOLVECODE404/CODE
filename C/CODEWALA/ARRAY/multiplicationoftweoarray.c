#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j,m,p,q,r,s;
    printf("enter the no of rows of first matrix:");
    scanf("%d",&n);
    printf("enter the no of columns of 1 matrix:");
    scanf("%d",&m);
    printf("enter the elements of second matrix:");
    scanf("%d",&p);
    printf("enter the no of columns of second matrix:");
    scanf("%d",&q);
    int a[n][m],b[p][q],c[n][q];
    if (m!=p){
        printf("the matrix cannot be multiplied");
    }
    else{
    printf("enter the elements of 1 matrix:");
        for (i=0;i<n;i++){
            for (j=0;j<m;j++){
                scanf("%d",&a[i][j]);
            }
        }
    printf("enter the elements of 2 matrix:");
        for (i=0;i<p;i++){
            for (j=0;j<q;j++){
                scanf("%d",&b[i][j]);
            }
        }
    for (i=0;i<n;i++){
        for (j=0;j<q;j++){
            c[i][j]=0;
            for (int k=0;k<n;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }}
    printf("the mulitiplication of matrix is :");
    printf("\n");
    for (i=0;i<n;i++){
        for (j=0;j<q;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    }
}