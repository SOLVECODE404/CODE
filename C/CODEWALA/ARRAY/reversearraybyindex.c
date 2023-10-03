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
    int a[5];
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    reverse(a,0,4);
    for (i=0;i<n;i++){
    printf("%d ",a[i]);}  
}