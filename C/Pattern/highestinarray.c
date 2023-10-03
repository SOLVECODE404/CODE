#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int a[5],i,j,temp,min;
    printf("enter the no:");
    for (i=0;i<5;i++){
    scanf("%d",&a[i]);}
    temp=a[0];
    min=a[0];
    for(i=0;i<5;i++)
    {if(a[i]>temp)
    {temp=a[i];}
    }
    printf("the max in array is %d\n",temp);
    for(i=0;i<5;i++)
    {if(a[i]<min)
    {min=a[i];}
    }
    printf("the min in array is %d\n",min);
    return 0;
}