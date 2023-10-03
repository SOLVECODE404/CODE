/* number which has factor no 1 and no itself*/
#include<math.h>
#include<stdio.h>
int main()
{
    
    int x;
    printf("enter the no:");
    scanf("%d",&x);
    int i ,var,var2,count=0;
    var=ceil(sqrt(x));
    var2=x;
    /*ceil fn returns a smallest integer 
    greater than or equal to x*/ 
    for(i=2;i<=var;i++)
    {
        if (var2%i==0)
        count=1;
    }
    if((count==0 && var2!=1)|| var2==2||var2==3)
        printf("no %d yes its a prime ",var2);
    else
        printf("no %d not a prime ",var2);
    return 0;
}