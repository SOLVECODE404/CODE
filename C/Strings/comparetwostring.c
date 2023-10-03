#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[10],b[10];
    int i,flag=0;
    printf("enter the string1:");
    gets(a);
    printf("enter the string2:");
    gets(b);
    for (i=0;a[i]!='\0'||b[i]!='\0';i++)
    {
        if(a[i]!=b[i]){
        flag=1;
        break;}
    }
    if (flag==1)
    {
        printf("not same");
    }
    else
    {
        printf("same");
    }
    return 0;
}