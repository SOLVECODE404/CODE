#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b){
    return a<b;//for ascending order
    // return a>b;//for descending order
}
int main(){
    int n=5;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}