#include<iostream>
using namespace std;

int swap(int arr[],int n){
    for (int i=0;i<n-1;i+=2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

int main(){
    int n;
    cin>>n;
    int arr[15];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    swap(arr,n);
}