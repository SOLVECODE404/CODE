#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[]={4,2,8,7,9};
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            i++;
        }
    }
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag=false;
            break; 
        } 
    }
    if(flag==true) cout<<"Almost sorted";
    else cout<<"Not almost sorted";
}