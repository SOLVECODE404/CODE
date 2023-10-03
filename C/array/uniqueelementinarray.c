#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int a[20],i,j,n;
    printf("enter the size:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        int c=0;
        for (j=0;j<n;j++)
        {
            if (i!=j)
            {
                if(a[i]==a[j])
                {
                    c++;
                }
            }
        }
        if (c==0)
    {
        printf("%d ",a[i]);
    }    
    }
    return 0;
}