#include<iostream>
#include<unistd.h> 
using namespace std;

int getmax(int arr[],int n){
    int max = INT8_MIN;
    for (int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int getmin(int arr[],int n){
    int min = INT8_MAX;
    for (int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<getmax(arr,n)<<endl;
    cout<<getmin(arr,n)<<endl;
}