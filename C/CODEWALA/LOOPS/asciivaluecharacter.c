#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j;
    printf("enter the no btw 65 and 90");
    scanf("%d",&n);
    for (i=65;i<=90;i++){
        printf("%d value in character is%c\n",i,i);
    }
}