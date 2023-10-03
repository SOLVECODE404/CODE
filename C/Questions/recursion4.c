#include<stdio.h>
int fun(int n);
int main()
{
    fun(5);
    return 0;
}
int fun(int n)
{
    int x=1,k;
    if (n==1) return x;
    for (k=1;k,n;++k)
    x=x+fun(k)*fun(n-k);
    return x;
}

//the answer is equal to 51