#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=6;
    int arr[n]={0,1,3,4,5,7};
    int lo=0;
    int high=n-1;
    int ele=-1;
    while(lo<=high){
        int mid=lo+(high-lo)/2;
        if(arr[mid]==mid){lo=mid+1;}
        else{    
            ele=mid;
            high=mid-1;
        }
    }
        cout<<ele<<endl;
}