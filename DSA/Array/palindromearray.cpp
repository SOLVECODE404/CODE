#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool t=true;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<(n/2);i++){
        if (arr[i]!=arr[n-1-i]){
            t=false;
        }
        
    }
    if(t==true)cout<<"Array is palindrome"<<endl;
        else cout<<"Array is not palindrome"<<endl;
}