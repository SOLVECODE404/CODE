#include<iostream>
using namespace std;

int sumarray(int arr[],int n){
    int sum=0,totalsum=0,negativesum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0)
        {
        sum+=arr[i]; 
        // cout<<sum<<endl;
        }
        if(arr[i]<0)
        {
            negativesum+=arr[i];
            // cout<< negativesum<<endl;
        }   
        totalsum=sum+negativesum;
    }
    return totalsum;
}

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sumarray(arr,n)<<endl;
}