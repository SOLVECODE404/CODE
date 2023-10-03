#include<iostream>
#include<vector>
using namespace std;
int main(){
// int n;
// cin>>n;
// vector<int>v;
// for(int i=0;i<n;i++){
// int x;
// cin>>x;
// v.push_back(x);}
// for(int i=0;i<n;i++){
//     cout<<v[i]<<" ";
// }
// cout<<endl;
int k,l;
cin>>k>>l;
vector<vector<int>>x;
for(int i=0;i<k;i++){
    vector<int>row;
    for(int j=0;j<l;j++){
    int b;
    cin>>b;
    row.push_back(b);}   
x.push_back(row);}
};