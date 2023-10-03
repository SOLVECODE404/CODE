#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,m,j,maxcnt=0,idx;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
        scanf("%d",&a[i][j]);}
    }
    for (i=0;i<n;i++){
        int cnt=0;
        for(j=0;j<m;j++){
            if(a[i][j]==1){
                cnt++;
            }
            if(maxcnt<cnt){
                maxcnt=cnt;
                idx=i;
            }
        }
        printf("the no of one is %d\n",cnt);
    }
    printf("the max of cnt in row  %d and no of cnt is %d\n:",idx,maxcnt);
}