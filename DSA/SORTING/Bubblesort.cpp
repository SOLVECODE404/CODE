#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n]={1,9,5,7,2,0,-1};
    for(int i=0;i<n-1;i++){
        bool flag=false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        if(flag ==true){break;};
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";}
    cout<<endl;
}

// in bubble sort the last element after each iteration comes to end of the loop....

// time complexity (0(n2));
// best case(0{n});