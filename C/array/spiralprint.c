#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    int a[n][m];
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //  spiral print

    int cnt = 0;
    int minc = 0;
    int minr = 0;
    int maxr = n- 1;
    int tele = n * m;
    int maxc = m - 1;
    while (cnt<tele){
    for (j= minc; j <= maxc && cnt < tele; j++)
    {
        printf("%d ", a[minr][j]);
        cnt++;
    }
    minr++;
    for (i=minr; i<=maxr && cnt < tele; i++)
    {
        printf("%d ", a[i][maxc]);
        cnt++;
    }  
    maxc--;
    for (j= maxc; j>= minc && cnt < tele; j--)
    {
        printf("%d ", a[maxr][j]);
        cnt++;
    }
    maxr--;
    for (i = maxr; i >= minr && cnt < tele; i--)
    {
        printf("%d ", a[i][minc]);
        cnt++;
    }
    minc++;}
}                                                                                                                                                                                                      