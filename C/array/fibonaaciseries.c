#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int t1=0,t2=1;
    int nexterm=t1+t2;
    printf("the fibpnacci series is %d,%d,",t1,t2);
    for(int i=3;i<n;i++){
        printf("%d,",nexterm);
        t1=t2;
        t2=nexterm;
        nexterm=t1+t2;
    }
    return 0;
}