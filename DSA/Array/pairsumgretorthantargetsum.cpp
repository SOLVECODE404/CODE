#include<bits/stdc++.h>

using namespace std;


void sumgreator(int arr[],int n){
    int count=0;
    int targetsum=3;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]>targetsum){count++;}
        }
    }
    cout<<"The no of pair's that are possible are:";
    cout<<count<<endl;
}

int main(){
    int arr[]={4,6,2,3,9};
    int n=5;
    sumgreator(arr,n);
}