#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
void main()
{
    int n,i,j,bin_num,base=1,rem,div_bin;
    scanf("%d",&n);
    bin_num=n;
    while(n!=0)
    {
        rem=n%10;
        div_bin=rem*base+div_bin;
        n/=10;
        base=base*2;
    }
    printf("the no in binary form is%d\n",n);
    printf("the no in decimal form is %d\n",div_bin);

}
