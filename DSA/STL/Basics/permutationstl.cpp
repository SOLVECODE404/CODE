#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int a[]={2,4,6,7};
    // int n=4;
    // rotate(a,a+2,a+n);
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }cout<<endl;

    // vector<int>v{10,20,30,40,50};
    // int k=5;
    // rotate(v.begin(),v.begin()+2,v.end());
    // for(int i=0;i<5;i++){
    //     cout<<v[i]<<' ';
    // }cout<<endl;

    // Next Permutation the next greator number
    //in the array or vector
    vector<int>v{1,2,3};
    int n=3;
    next_permutation(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    next_permutation(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    next_permutation(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}