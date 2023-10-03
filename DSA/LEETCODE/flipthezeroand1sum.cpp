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
    for(int i=0;i<n;i++){
        if(v[i][0]==0){
            for(int j=0;j<m;j++){
                if(v[i][j]==0)v[i][j]=1;
                else v[i][j]=0;
            }
        }
    }
    for(int j=m-1;j>=0;j--){
        int noz=0;
        int noo=0;
        for(int i=0;i<n;i++){
            if(v[i][j]==0)noz++;
            else noo++;
            }
        if(noz>noo){
        for(int i=0;i<n;i++){
            if(v[i][j]==0)v[i][j]=1;
                else v[i][j]=0;
            }
        }
    }
    cout<<"The transformation of the array is:"<<endl ;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        int x=1;
        for(int j=0;j<m;j++){
            sum+=v[i][j]*x;
            x*=2;
        }
    }
    cout<<"sum is: "<<sum<<endl;
}