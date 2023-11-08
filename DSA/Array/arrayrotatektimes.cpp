#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>&v,int start,int end){
    while(start<end){
        swap(v[start++],v[end--]);
    }
}
void rotatearray(vector<int>&v,int k){
    int n=v.size();
    k%=n;

    // left rotate array

    // reverse(v,0,k-1);
    // reverse(v,k,n-1);
    // reverse(v,0,n-1); 

    // right rotate array 

    reverse(v,0,n-1);
    reverse(v,0,k-1);
    reverse(v,k,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int k=2;
    vector<int>v(arr,arr+n);
    rotatearray(v,k);
}