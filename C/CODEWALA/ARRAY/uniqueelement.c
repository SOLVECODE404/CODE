#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
int main()
{
    int n,i,j,x;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++){
        bool flag=false;
        for(j=i+1;j<n;j++){
            if (a[i]==a[j]){
                flag=true;
            }
        }
        if (flag==false){printf("the unique element is %d",a[i]);break;}}
    }
    