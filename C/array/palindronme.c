#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,org,rev,rem;
    scanf("%d",&n);
    org=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if (org ==rev)
    {
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }

    return 0;
} 