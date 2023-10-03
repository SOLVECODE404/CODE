#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i=0,j=0,org,rem,result;
    printf("enter the no :");
    scanf("%d",&n);
    org=n;
    while (org!=0)
    {
        rem=org%10;
        result+=rem*rem*rem;
        org/=10;
    }
    if (result==n)
    {
        printf("armstong");
    }
    else{
        printf("not a armstong");
    }
    return 0;
}