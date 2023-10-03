#include<iostream>
using namespace std;
int main(){
    int n,m,i,j;
    cin>>n;
    int arr[n];
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The reverse of Array is :";
    // for(i=0,j=n-1;i<n/2;i++,j--){
    //         m=arr[i];
    //         arr[i]=arr[j];
    //         arr[j]=m;
    // }
    for(i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    // for(i =0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    cout<<endl;
}