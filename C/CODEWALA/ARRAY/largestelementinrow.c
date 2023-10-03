#include <stdio.h>

int main()
{
    int m, n; // Matrix Size Declaration
    printf("Enter the number of rows and column: \n");
    scanf("%d %d", &m, &n); // Matrix Size Initialization
    int arr[10][10];        // Matrix Size Declaration
    printf("\nEnter the elements of the matrix: \n");
    for (int i = 0; i < m; i++) // Matrix Initialization
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nThe elements in the matrix are: \n");
    for (int i = 0; i < m; i++) // Print the matrix
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int i = 0, j, max, res[m];
    while (i < n)
    {
        for (j = 0; j < m; j++)
        {
            if (arr[j][i] > max)
            {
                max = arr[j][i];
            }
        }
        res[i] = max;
        max = 0;
        i++;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", res[i]);
    }
    printf("\n");
    int maxsum=0;
    int idx=-1;
    for (i = 0; i < m; i++)
    {
        int sr = 0;

        for (j = 0; j < n; j++)
        {
            sr += arr[i][j];
        }
        if (sr>maxsum){
            maxsum=sr;
            idx=i;
        }
    }
    printf("the sum of row %d has maxsum in all individual rows %d\n", i, maxsum);
    
    // printf("\n");
    // for (i=0;i<m;i++){
    //     int sc=0;
    //     for(j=0;j<n;j++){
    //         sc+=arr[j][i];
    //     }
    //     printf("the sum of the column %d is %d\n",i,sc);
    // }
}