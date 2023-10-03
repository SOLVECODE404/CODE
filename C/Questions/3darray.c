#include<stdio.h>
int main()
{
    int a[2][2][4]={{{1,2,3,4},{5,4,5,6}},
    {{3,4,5,6},{2,3,4,5}}};
    int i,j,k;
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
            {
                for(k=0;k<4;k++)
                {
                printf("%d ",a[i][j][k]);
                }
                printf("\n");
            }
                
    }

}