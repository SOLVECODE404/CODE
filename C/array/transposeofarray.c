#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int arr[2][3],i,j;
    printf("enter the no:");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("before transpose\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("after the transpose\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}