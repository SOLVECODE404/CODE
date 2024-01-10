#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={4,4,1,3,5,3,1};
    int n=8;
    int res=0;
    for(int i=0;i<n;i++){
        res=res^(arr[i]);
    }
    cout<<res<<endl;
}