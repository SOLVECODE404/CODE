#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j,idx=0,k;
    scanf("%d",&n);
    printf("enter the no u wnt in smallest form:");
    scanf("%d",&k);
    int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++){for (j=i+1;j<n;j++)if (a[i]>a[j]){int temp=a[i];a[i]=a[j];a[j]=temp;}}
    for (i=0;i<n;i++){printf("%d ",a[i]);}printf("\n");
    printf("%d\n",a[k-1]);}