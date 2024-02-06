#include <bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
    return a<=b;
}

int main()
{
    int coins[] = {1,2,5,10,20,50,100,200,500,1000,2000};
    int n=11;
    int money=168;
    while(money>0){
    int lb=lower_bound(coins,coins+n,money,cmp)-coins-1;
    int m=coins[lb];
    cout<<m<<' ';
    money-=m;
    }
}