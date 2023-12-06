#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int idx1=-1,idx2=-1;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            if(idx1==-1){
            idx1=i;
            idx2=i+1;}
        else{
            idx2=i+1;
        }
        }
    }
    swap(arr[idx1],arr[idx2]);
    for(auto x:arr){
        cout<<x<<" ";
    }
}