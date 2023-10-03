#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    long unsigned int n,i,j;
    scanf("%ld",&n);
    int count;
    while(n>0)
    {
        n/=10;
        count++;
    }
    printf("the no of digits is:%d",count);
}