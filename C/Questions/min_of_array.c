#include<stdio.h>
#include<math.h>
#include<string.h>

int minofarr(int arr[],int length)
{   int i;
    int min=arr[i+1];
    for (int i = 0; i<length; i++)
    {
        if (arr[i]<min){
        min=arr[i];}

    }
    return min;
    
}

int main()
{
    int arr[]={24,12,15,18};
    int min= minofarr( arr,4);
    printf("minimum of array is %d\n",min);

}