#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int si,int ei){
    int pivotelement=arr[si];
    int count=0;
    for(int i=si;i<=ei;i++){
        if(arr[i]<pivotelement){count++;}
    }
    int pivotidx=count+si;
    swap(arr[si],arr[pivotidx]);
    
}

void quickSort(int arr[],int si,int ei){
    if(si>=ei)return;
    int pi=partition(arr,si,ei);
    quickSort(arr,si,pi-1);
    quickSort(arr,si+1,pi);
}

int main(){
    int arr[]={3,5,1,7,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}