#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[20];
    int i,count=0;
    printf("enter the no:");
    // scanf("%s",s);
    // fgets(s,20,stdin);
    gets(s);
    while (s[i]!='\0')
    {
        count++;
        i++;
    }
    printf("%d the length of string is:",count);
    return 0;
}