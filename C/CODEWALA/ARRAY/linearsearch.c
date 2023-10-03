#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j,x;
    scanf("%d",&n);
    scanf("%d",&x);
    int flag=0,idx=-1;
    int a[n];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++){
        if (a[i]==x){
            flag=1;
            idx=i;
            break;
        }}
    if (flag==0){printf("the element is not present");}
    else printf("the %d element is present at %d index",x,i);}