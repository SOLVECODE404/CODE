#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int high=n-1;
    while(lo<=high){
        int mid=lo+(high-lo)/2;
        if(arr[mid]==mid+1){lo=mid+1;}   
        if(arr[mid]==mid){
            if(arr[mid]==arr[mid-1]){
                cout<<arr[mid];
                break;
            }
            else high=mid-1;
        }
    }       
}