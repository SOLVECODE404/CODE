#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[15],b[6];
    int len1,len2,len3,i;
    printf("enter the first string:");
    scanf("%s",s);
    printf("enter the second string:");
    scanf("%s",b);
    len1=strlen(s);
    len2=strlen(b);
    for (i=0;i<=len2;i++)
    {
        s[len1+i]=b[i];
    }
    len3=strlen(s);
    printf("%d\n",len3);
    printf("the append string is :%s\n",s);
    return 0;
}