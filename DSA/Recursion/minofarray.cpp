#include<bits/stdc++.h>
using namespace std;

int minimum(vector<int>a,int idx,int &mini)
{
    if(idx==a.size())return mini;
    mini=min(a[idx],mini);
    return minimum(a,idx+1,mini);
}

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int mini=INT16_MAX;
    cout<<minimum(a,0,mini);
}