#include<stdio.h>
int main()
{
    int arr[2][3]={{1,2,3},{4,5,6}};
    int rowsum=0,columnsum=0,i,j;
    printf("row total:");
    for(i=0;i<2;i++)
        {
            for(j=0;j<3;j++)
            {
                rowsum+=arr[i][j];  
            }
            printf("%d ",rowsum);
            rowsum=0;
        }
        printf("\ncolumnsum:");
        for (j=0;j<3;j++)
        {
            for(i=0;i<2;i++)
            {
                columnsum+=arr[i][j];
            }
            printf("%d ",columnsum);
            columnsum=0;
        }
        return 0;
} 
