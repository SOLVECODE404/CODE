#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j,sumeven=0,sumodd=0;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++){
        if (i%2==0) sumeven+=a[i];
        else sumodd+=a[i];
    }
    printf("%d",sumeven-sumodd);
}