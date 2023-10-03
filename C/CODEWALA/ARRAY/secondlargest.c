#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n],max=a[0],smax=a[0];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++){
        if (max<a[i]){
            smax=max;
            max=a[i];
        }
        else if (smax<a[i] && max!=a[i]){
            smax=a[i];
        }
    }
    printf("the max element of array is %d\n",max);
    printf("the second max element of array is %d\n",smax);
}   