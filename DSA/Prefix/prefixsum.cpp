#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>ans={5,6,3,7,8};
    for(int i=1;i<ans.size();i++){
        ans[i]+=ans[i-1];
    }
    for(auto x:ans){
        cout<<x<<" ";
    }
}