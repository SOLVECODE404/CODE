#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int num;
    printf("enter the nO:");
    scanf("%d",&num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n",num,i,num*i);
    }
    
    return 0;
}
