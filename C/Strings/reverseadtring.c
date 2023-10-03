#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[20],ch;
    int i,l;
    printf("enter the no:");
    scanf("%s",a);
    // gets(a);
    l=strlen(a);
    // for(i=0;i<l/2;i++)
    // {
    //     ch=a[i];
    //     a[i]=a[l-1-i];
    //     a[l-1-i]=ch;
    // }
    for(i=l-1;i>=0;i--){
    printf("%c",a[i]);}
    return 0;
}