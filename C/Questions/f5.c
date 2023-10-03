#include<stdio.h>
int main()
{
    int i;
    printf("enter the no:");
    scanf("%d",&i);
    if (i<100&&i>=90)
    {
        printf("A");
    }
    else if(i<90&&i>=70)
    {
        printf("B");
    }
    else if(i<70&&i>=50)
    {
        printf("C");
    }
    else if(i<50&&i>=40)
        {printf("D");}

    else if(i<40&&i>=0)
        {printf("F");}
}