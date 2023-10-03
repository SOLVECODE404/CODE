#include<stdio.h>
int main()
{
    int num=435;
    int count =0;
    while(num)
    {
        count++; 
        num>>=1;
    }
    printf("%d",count);
} 