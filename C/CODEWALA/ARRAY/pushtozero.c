#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j,idx=0;
    scanf("%d ",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++){
        if (a[i]!=0){
            b[idx]=a[i];
            idx++;
        }
    }
    while (idx!=n){
        b[idx]=0;
        idx++;
    }
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }
}
