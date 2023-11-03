#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void shiftevenodd(int arr[],int n){
    int arr2[n]={0};
    int j=0;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
    if(arr[i]==0){
        arr2[j]=arr[i];j++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr2[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }cout<<endl;
}

int main(){
    int arr[]={2,5,0,1,0,4,0,2};
    int n=8;
    shiftevenodd(arr,n);
}