#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    // first method to do it....
    // for (i=1;i<=n;i++){
    //     int a=1;
    //     for (j=1;j<=n;j++){printf("%d",a);a=a+2;}printf("\n");
    // }

    // second method to do it.....
    // for (i=1;i<=n;i++){for (j=1;j<=2*n-1;j=j+2){printf("%d",j);}printf("\n");}
    for (i=1;i<=n;i++){
        int a=1;
        for (j=1;j<=i;j++){printf("%d",a);a=a+2;}printf("\n");
    }


}