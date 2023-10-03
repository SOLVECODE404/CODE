#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j,count=0,x;
    scanf("%d %d",&n,&x);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
            if (a[i]+a[j]+a[k]==x){
                count++;
                printf("the pairs are :(%d,%d,%d)\n",a[i],a[j],a[k]);
            }}
        }   
    }
    printf("the no of pairs are %d\n",count);
}