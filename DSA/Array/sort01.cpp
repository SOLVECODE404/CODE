#include<iostream>
#include<vector>
using namespace std;

void sort01(vector<int>v){
    int n=v.size();
    int noz=0;
    int noe=0;
    for(int i=0;i<n;i++){
        if(v[i]==0)noz++;
        else noe++;
    }
    for(int i=0;i<n;i++){
        if(i<noz)v[i]=0;
        else v[i]=1;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
        cout<<endl;
}

void sort02(vector<int>v){
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(v[i]==0&&v[i]<n&&i<j)i++;
        if(v[j]==1&&v[i]<n&&i<j)j--;
        if(v[i]==1&&v[j]==0&&v[i]<n&&i<j){
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
vector<int>v={1,1,0,1,0,1,1,0};
sort02(v);
}
