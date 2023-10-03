#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include"array.h"
int main()
{
    int c[2][2],i,j,sr,sc;
    printf("enter the no:");
    for (i=0;i<2;i++){
        for (j=0;j<2;j++)
        {
            scanf("%d",&c[i][j]);
        }
    }
    for (i=0;i<2;i++){
        sc=0,sr=0;
        for (j=0;j<2;j++)
        {
            sc+=c[i][j];
            sr+=c[j][i];
        }
        
    }
    printf("the sum of sc is %d\n",sc);
    printf("the sum of sr is %d\n",sr);
    return 0;
}