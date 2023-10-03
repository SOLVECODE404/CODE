#include<stdio.h>
#include<math.h>
#include<string.h>

int maxofarr(int arr[],int length)
{
    int max=0;
    for (int i = 0; i<length; i++)
    {
        if (arr[i]>max){
        max=arr[i];}

    }
    return max;
    
}

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int max= maxofarr( arr,7);
    printf("maximum of array is %d\n",max);

}