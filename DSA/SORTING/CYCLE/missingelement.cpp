#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5]={5,3,4,1,2};
    int n=5;
    int i=0;
    while(i<n){
        int corectidx=arr[i]-1;
        if(i==corectidx)i++;
        else swap(arr[i],arr[corectidx]);
    }
    for(auto x:arr){
        cout<<x<<" ";
    }
}