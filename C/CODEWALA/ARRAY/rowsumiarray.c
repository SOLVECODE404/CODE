#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,m,j,sr=0,maxsum = 0,temp ;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
        scanf("%d",&a[i][j]);}
    }
    for (i=0;i<n;i++){
        sr = 0;
        for(j=0;j<m;j++){
            sr += a[i][j];
            if (maxsum<sr)
            {
                maxsum=sr;
            }
        }
        printf("the sum of row is %d\n",sr);
    }
    printf("the max sum of row is %d\n",maxsum);

}