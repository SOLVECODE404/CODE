#include<bits/stdc++.h>
using namespace std;


void print(int arr[],int n){
    if(n<1)return ;
    int temp[n-1];
    for(int i=0;i<n-1;i++)temp[i]=arr[i]+arr[i+1];
    for(auto z:temp)cout<<z<<" ";
    cout<<endl;
    print(temp,n-1);    
    for (auto z : temp)
        cout << z << " ";
    cout << endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(auto x:arr)cout<<x<<" ";
    cout<<endl;
    print(arr,n);
    for (auto x : arr)cout << x << " ";
    cout << endl;
}