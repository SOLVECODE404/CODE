#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n;
    int counter=0;
    printf("enter the no:");
    scanf("%d",&n);
    if (n==0)
        printf("the no of digits is 1");
    else
    {
        while(n!=0)
        {
            n=n/10;
            counter++;
        }
        printf("the no of digits is %d\n",counter);
    }
    return 0;
}