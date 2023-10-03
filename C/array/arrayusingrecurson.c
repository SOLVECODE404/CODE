#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define max_size 50

void printarray(int arr[],int start,int length);
int main()
{

    int a[max_size],n,i;
    printf("enter the no of elements:");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("the array elements is:");
    printarray(a,0,n);
} 
void printarray(int arr[],int start,int length){
    if (start>=length)
    return;
    printf("%d",arr[start]);
    printarray(arr,start+1,length);
}