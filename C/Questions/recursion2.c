#include<stdio.h>
void fun(int n);

int main()
{
    fun(6);
    return 0;
}
void fun(int n)
{
    int i=0;
    if (n>1)
        fun(n-1);
    for(i=0;i<n;i++)
        printf("*b");
}
// the no of times the star will be printed is n(n+1)/2*/