#include<stdio.h>
int main()
{
    int arr[]={10,12,1,3,14,42,53,35,53,35,35,356,57};
    printf("%d",sizeof(arr)/sizeof(arr[0]));
}