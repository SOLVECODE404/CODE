#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n],b[n],max=a[0],smax=a[0];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // first method 
    
    for (i=0;i<n;i++){
        b[i]=a[n-i-1];
    }
    for (i=0;i<n;i++){
        printf("%d ",b[i]);
    }    
    for (i=0;i<n;i++){
        if (a[i]==b[i]){printf("the array is palindrome\n");break;}
        else printf("not palindrome\n");break;
    }}
    // second method


    // for (i=0;i<n/2;i++){
    //     int temp=a[i];
    //     a[i]=a[n-i-1];
    //     a[n-i-1]=temp;
    // }
    // for (i=0;i<n;i++){
    //     printf("%d ",a[i]);
    // }}