#include<iostream>
#include<unistd.h>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=INT8_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    int smax=INT8_MIN;
    for(int i=0;i<n;i++){ 
        if(arr[i]!=max && smax<arr[i]){
            smax=arr[i];
        }
    }
    cout<<"max element is:"<<max<<endl;
    cout<<"second max element is:"<<smax<<endl;
}