/*a number or a word or phrase if read from back 
number return the same no or a word or phrase as it is 
being reads forward.*/
#include<stdio.h>
int main()
{
    int n,result=0,q,rem;
    printf("Enter the no:");
    scanf("%d",&n);

    q= n;
    while(q!=0)
    {
        rem=q%10;
        result=result*10+rem;
        q=q/10;
    }

    if(result==n)
        printf("its  palindrome");
    else
        printf("no its a palindrome");
    return 0;
}
      