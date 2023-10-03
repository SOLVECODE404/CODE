#include<bits/stdc++.h>
using namespace std; 

int maxarr(int arr[],int n,int idx){
    if(idx==n)return INT16_MIN;
    return max(arr[idx],maxarr(arr,n,idx+1));
}

int main(){
    int arr[]={2,7,9,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxarr(arr,n,0)<<endl;
}  