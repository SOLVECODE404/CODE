#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int base_number, a[base_number], b[base_number];
    scanf("%d", &base_number);
    for(int i = 0; i<base_number; i++) scanf("%d", &a[i]);

    for(int i = 0, j=base_number-1; i<base_number, j>=0; i++, j--)
        b[i] = a[j];
    for(int i = 0; i<base_number; i++)
    {
        if(b[i] != a[i]){
            printf("Not pal");
            return 0;
        }
    }
    printf("Palin");
    
}