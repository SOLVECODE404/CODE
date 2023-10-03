#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[20];
    printf("enter the string:");
    // fgets(s,20,stdin);
    scanf("%s",s);
    printf("%s\n",s);
    printf("%10.5s\n",s);
    printf("%s",&s[2]);
    return 0;
}