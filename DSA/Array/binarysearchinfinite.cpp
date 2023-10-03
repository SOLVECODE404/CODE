#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int lo=0;
    int high=1;
    int tgt=1;
    bool flag=false;
    while(arr[high]<tgt){
        lo=high;
        high*=2;
    }
    while(lo<=high){
        int mid=lo+(high-lo)/2;
        if(arr[mid]==tgt){flag=true;break;}
        else if(arr[mid]<tgt)lo=mid+1;  
        else high=mid-1;
    }
    if(flag==true)cout<<"yes";
    else cout<<"no";
}