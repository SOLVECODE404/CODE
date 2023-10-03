#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int arr[5]={12,18,43,46,56};
    int target;
    cin>>target;
    int lo=0;
    int high=n-1;
    while(lo<=high){
        int mid=lo+(high-lo)/2;
        if(arr[mid]==target)return arr[mid];
        else if(arr[mid]<target) lo=mid+1;
        else high=mid-1;
    }
    cout<<arr[high]<<endl;
    cout<<arr[lo]<<endl;
}