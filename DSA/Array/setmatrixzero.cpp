// if zero is there at any element then make the row and column full zero
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v;
    for(int i=0;i<n;i++){
        vector<int>k;
        for(int j=0;j<m;j++){
            int b;
            cin>>b;
            k.push_back(b);
        }v.push_back(k);
    }
    vector<int>row(n,0),col(m,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i]or col[j])v[i][j]=0;
        }
    }
    cout<<"The transformed array is:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
}