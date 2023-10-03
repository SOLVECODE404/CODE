#include<bits/stdc++.h>
using namespace std;

int pow(int n,int m)
{
    if(m==1)return n;
    if(m%2==0){
    int ans = pow(n,m/2);
    return ans*ans;
    }
    if(m%2!=0){
        int ans = pow(n, m / 2);
        return ans * ans *n;
    }return 100;
}

int main()
{
    cout<<pow(2,4)<<endl;
}   
