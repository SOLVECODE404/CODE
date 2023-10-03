    #include <stdio.h>
    #include <math.h>
    #include <string.h>
    #include <ctype.h>
    int main()
    {
        int n, i, m, j;
        scanf("%d", &n);
        int a[n][n];
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        for (i=0;i<n;i++){
            for (j=0;j<=i;j++){
                int temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
            }
        }
        for (i=0;i<n;i++){
            int j=0;
            int k=n-1;
            while(j<k){
                int temp=a[i][j];
                a[i][j]=a[i][k];
                a[i][k]=temp;
                j++;
                k--;
            }
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }