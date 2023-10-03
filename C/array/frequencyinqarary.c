#include<stdio.h>
int main(){
    int c= 0,n,i,j;
    printf("enter the no of elements:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    int a[1000],b[1000];
    for( i = 0; i<n; i++) { scanf("%d", &a[i]);}
    for( i = 0; i<n; i++)
    {
        c=1;
        if(a[i]!=-1)
        {for (j=i+1;j<n;j++)
        {if (a[i]==a[j]){
            c++;
            a[j]=-1;
        }
        }
        b[i]=c;}}
        for (i=0;i<n;i++)
        {
            if (a[i]!=-1)
            {
                printf("no of %d is %d \n",a[i],b[i]);
            }
        }
}