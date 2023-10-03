#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j;
    int a[100];
    gets(a);
    int l1=strlen(a);
    for (i=0,j=i;i<j;i++,j--){
        if (a[i]==a[j]){
        printf("palindrome");
        break;}
        else{
            printf("not palindrome");
        }
    }
}