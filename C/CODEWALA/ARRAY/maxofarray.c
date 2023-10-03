#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for (int i=0;i<n;i++){
            if (max>a[i]){max=a[i];}
        }
        printf("the min is:%d",max);
}
    
