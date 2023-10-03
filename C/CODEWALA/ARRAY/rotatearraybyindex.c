#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
void reverse(int a[],int m ,int n){
    for (int i=m,j=n;i<j;i++,j--){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;}
    return;
}
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    printf("the no by which u wnt to rotate:");
    scanf("%d",&k);
    k=k%n;
    reverse(a,0,n-1);
    reverse(a,0,k-1);
    reverse(a,k,n-1);
    for (i=0;i<n;i++){
    printf("%d ",a[i]);}  
}