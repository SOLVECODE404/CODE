#include<bits/stdc++.h>
using namespace std;
int reve(int n){
    static int ans=0;
    if(n<=0)return ans;
    int dig=n%10;
    ans=ans*10+dig;
    return reve(n/10);
}

int main(){
    int n;
    cin>>n;
    cout<<reve(n);
}   