#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int c=0,r=0,n,i,j;
    printf("enter the no of elements:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    int a[1000];
    for( i = 0; i<n; i++) { scanf("%d", &a[i]);}
    for( i = 0; i<n; i++)
    {
        if (a[i]%2==0)
        {
            c++;
        }
        else{
            r++;
        }
    }
    printf("even no is:%d\n",c);
    printf("odd no is:%d\n",r);
    return 0;
}