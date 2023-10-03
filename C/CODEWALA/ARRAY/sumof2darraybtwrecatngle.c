#include <stdio.h>

int main()
{
    int n,ra,ca,r,c,sum=0;
    printf("enter order of matrix");
    scanf("%d %d",&ra,&ca);
    int a[ra][ca];
    for(r=0;r<ra;r++)
    {
        for(c=0;c<ca;c++)
        {
            printf("enter a[%d][%d]",r,c);
            scanf("%d",&a[r][c]);
        }
    }
    for(r=0;r<ra-1;r++)
    {
        for(c=0;c<ca;c++)
        {
            if(c!=0)
            {
                sum=sum+a[r][c];
            }
        }
    }
    printf("%d",sum);
    
}