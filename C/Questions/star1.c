#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n,i,j;
    printf("enter the no:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for( j=0; j < i+1; j++)
        {
            printf("*");
        } 
        printf("\n");    
    }
    return 0;
}