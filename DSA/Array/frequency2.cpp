#include<iostream>
#include<vector>
using namespace std;
void checkfrequency(int arr[],int n){
    vector<int>frequency(n+1);
    for (int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]==i){
            frequency[i-1]++;
            }
        }
    }                   
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j||frequency[i]==0)
                continue;
            if(frequency[i]==frequency[j]){
                false;
            }
        }
    }
    true;
}
int main(){
    int arr[]={1,1,1,2,2,4,4,4,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    checkfrequency(arr,n);
}
