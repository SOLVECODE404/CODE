#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={2,3,4,5,6,7,8,9};
    int n=8;
    vector<int>ans(n);
    ans[0]=v[0];
    for(int i=1;i<v.size();i++){
        ans[i]=v[i]+ans[i-1];
    }
    int start,end;
    cin>>start>>end;
    cout<<ans[end]-ans[start-1];
}