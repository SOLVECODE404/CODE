#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[20];
    int i;
    printf("enter the string:");
    gets(a);
    for (i=0;a[i]!='\0';i++)
    {
        if(a[i]>=65&&a[i]<=90)
        {
            a[i]+=32;
        }
        printf("%s",a);
    return 0;
    }
} 