#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int arr1[4],arr2[4],arr3[4],i,sum=0;
    printf("enter the elements of 1 array:");
    for(i=0;i<4;i++){
    scanf("%d",&arr1[i]);}
    printf("enter the elements of 2 array:");
    for (i=0;i<4;i++){
    scanf("%d",&arr2[i]);}
    for (i=0;i<4;i++)
    {
        arr3[i]=arr1[i]+arr2[i];
        printf("the sum of array of arr1 and arr2 is %d\n",arr3[i]);
    }
    return 0;
} 