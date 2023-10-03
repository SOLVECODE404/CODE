// 1
// AB
// 123
// ABCD
// 12345

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if(i%2!=0){
            printf("%d", j);}
            else{printf("%c",64+j);}
        }
        printf("\n");
    }
}