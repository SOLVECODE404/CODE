#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n;
    printf("enter the no:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j>=i)
            {
                printf("%d",i);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        
    }
    
    return 0;
}