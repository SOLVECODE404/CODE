#include<stdio.h>
#define max 50
int main()
{
    int a[max][max],b[max][max],product[max][max];
    int arows,acolumns,brows,bcolumns;
    int i,j,k;
    int sum=0;
    printf("enter the no 1 :");
    scanf("%d %d",&arows,&acolumns);
    printf("enter the elemets of 1:\n");
    for(i=0;i<arows;i++)
        {
            for(j=0;j<acolumns;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
    printf("enter the no 2:");
    scanf("%d %d",&brows,&bcolumns);
    if (brows!=acolumns)
    { printf("not multiply sorry");
    }
    else
        {printf("enter the no of elements of no 2 :\n");
        for (i=0;i<brows;i++) 
            {
                for (j=0;j<bcolumns;j++)
                {
                    scanf("%d",&b[i][j]);
                }
            }
        }
        printf("\n");
        for(i=0;i<arows;i++)
        {
            for(j=0;j<bcolumns;j++)
            {
                for (k=0;k<brows;k++)
                {
                    sum+=a[i][k]*b[k][j];
                }
                product[i][j]=sum;
                sum=0;
            }
        }
        printf("resultant matrix\n");
        for(i=0;i<arows;i++)
        {
            for (j=0;j<bcolumns;j++)
            {
                printf("%d ",product[i][j]);

            }
            printf("\n");
        }
        return 0;

}