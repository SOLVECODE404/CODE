#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=8;
    int arr[n]={0,0,0,0,0,0,0,0};
    int x=1;
    int lo=0;
    int high=n-1;
    int count=0;
    int idx=-1;
    bool flag=false;
    while (lo<=high)
    {
        int mid=lo+(high-lo)/2;
        if(arr[mid]== x) {
            if(arr[mid]==0){
                flag=true;
                idx=mid;
                break;
            }
            else if(arr[mid-1]!= x){
                flag=true;
                idx=mid;
                break;
            }
            else{
                high=mid-1;
            }
        }
        else if(arr[mid]<x){lo=mid+1;}
        else {high=mid-1;}
    }
    if(idx==-1)cout<<0;
    else cout<<n-idx<<endl;
    // cout<<count<<endl;
}