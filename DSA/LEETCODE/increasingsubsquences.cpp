#include<bits/stdc++.h>

using namespace std;

void prints(int arr[],int n,int idx,vector<int>ans){
    if(idx==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    prints(arr,n,idx+1,ans);
    ans.push_back(arr[idx]);
    prints(arr,n,idx+1,ans);
}

int main(){
    int arr[]={2,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    prints(arr,n,0,v);
}