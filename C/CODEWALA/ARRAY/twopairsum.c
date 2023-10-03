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
        scanf("%d\b",&a[i]);
    }
    for (i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if (a[i]+a[j]==x){
                count++;
                printf("the pairs are :(%d,%d)\n",a[i],a[j]);
            }
        }   
    }
    printf("the no of pairs are %d\n",count);
}
// {
//     int n,i,j,count=0,x;
//     scanf("%d %d",&n,&x);
//     int a[n];
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     i=0;
//     j=n-1;
//     while (i<j){
//         if (a[i]+a[j]==x){
//             printf("(%d,%d)",a[i],a[j]);
//             break;
//         }
//         else if (a[i]+a[j]>x)j--;
//         else i++;
//     }
// }