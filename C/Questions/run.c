#include<stdio.h>
int main()
{
    char operator;
    int a,b;
    printf("enter operation:");
    printf("+\n,-\n,*\n,/\n");
    scanf("%c",&operator);
    switch (operator)
    {
        case '+':
            printf("enter the no 1:");
            scanf("%d",&a);
            printf("enter the no 2:");
            scanf("%d",&b);
            printf("sum is %d\n",a+b);
            break;
        case '-':
            printf("enter the no 1:");
            scanf("%d",&a);
            printf("enter the no 2:");
            scanf("%d",&b);
            printf("difference is %d\n",a-b);
            break;
        case '*':
            printf("enter the no 1:");
            scanf("%d",&a);
            printf("enter the no 2:");
            scanf("%d",&b);
            printf("multiply is %d\n",a*b);
            break;
        case '/':
            printf("enter the no 1:");
            scanf("%d",&a);
            printf("enter the no 2:");
            scanf("%d",&b);
            printf("division is %d\n",a/b);
            break;
    }
}