#include<bits/stdc++.h>
using namespace std;

int summ(vector<int>&a,int idx){
    if(idx==a.size()-1)return a[idx];
    return a[idx]+summ(a, idx + 1);
}

int main(){
    vector<int>a(4);
    for(int i=0;i<4;i++)cin>>a[i];
    cout<<summ(a,0)<<endl;
}