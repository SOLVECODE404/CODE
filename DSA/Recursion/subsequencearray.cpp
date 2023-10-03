#include<bits/stdc++.h>
using namespace std;

void subsequence(int arr[],int n,int k,vector<int>ans,int idx){
    if(idx==n){
        if(ans.size()==k){
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" x";
            }cout<<endl;
        }return;
    }
    if(ans.size()+(n-idx)<k)return;
    subsequence(arr,n,k,ans,idx+1);
    ans.push_back(arr[idx]);
    subsequence(arr,n,k,ans,idx+1);
}


int main(){
    int arr[]={2,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    vector<int>v;
    subsequence(arr,n,k,v,0);
}