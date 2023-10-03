#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
void swap(int*p1,int*p2);
void show(int *p1,int *p2);
int main()
{
    int arr1[]={1,2};
    int arr2[]={3,4};
    swap(arr1,arr2);
}
void swap(int*p1,int*p2)
{
    int *temp=p1;
    p1=p2;
    p2=temp;
    show(p1,p2);
}
void show(int *p1,int *p2){
    for (int i=0;i<2;i++)
    {
        printf("%d\n",*(p1+i));
    }
}