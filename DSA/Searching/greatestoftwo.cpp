#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    vector<int>b;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
        if(v[i]<v[j]&&v[i]<<v[k])
        {
            b.push_back(v[i]);
            break;
        }break;
    }
    }
    }
    for(int ele:b){
        cout<<ele<<" ";
    }cout<<endl;
}