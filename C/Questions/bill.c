#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int pu,cu, n,i,j,amt=0;
    for (i=1;i<=5;i++)
    {
        scanf("%d %d",&pu,&cu);
    }
    n=cu-pu;
    if (n<=200)
    {amt+=0;}
    else if (n<=300){
        amt+=3*n;
    }
    else if (n<=500){
        j=n-300;
        amt+=300*3+j*5;
    }
    else {
        int t=n-500;
        amt+=300*3+200*5+t*7;
    }
    printf("%d",amt);
}