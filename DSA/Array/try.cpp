#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int start,int end){
    while(start<end){
    swap(arr[start++],arr[end--]);
    }
    }

void rotatek(int arr[],int k,int n){
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    cout<<"After rotating:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[]={10,11,12,13,14,15};
    int n=5;
    int k=2;
    cout << "Before rotating:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }cout<<endl;
    rotatek(arr,k,n);
}