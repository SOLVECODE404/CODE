/* A number in which each digit when multiplied by 
itself n no of times and finally added together 
,results the same no*/
#include<stdio.h>
int main()
{
    int n,count=0,result=0,mul=1,cnt,rem;
    printf("enter the no:");
    scanf("%d",&n);
    int q =n;
    while(q!=0)
    {
        q=q%10;
        count++;
    }
    cnt=count;
    q=n;
    while(q!=0)
    {
        rem=q%10;
        while(cnt!=0)
        { 
            mul=mul*rem;
            cnt--;
        }
        result=result+mul;
        cnt=count;
        q=q/10;
        mul=1;
    }
    if (result==n)
    printf("its a armstrong no");
    else 
    printf("no its not a armstrong");
    return 0;
}
