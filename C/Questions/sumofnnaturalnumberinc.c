#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int sum=0,n;
    printf("enter the no:");
    scanf("%d",&n);
    //for constant run time
    // for (int i = 0; i < n; i++)
    // {
    //    sum+=i;
    
    // }
    // printf("%d\n",sum);
    //for fast calcultation apply formula for sum of natual numbers
    sum=((n*n)+n)/2;
    printf("%d\n",sum);

}