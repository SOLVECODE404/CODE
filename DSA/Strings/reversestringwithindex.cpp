#include<bits/stdc++.h>
using namespace std;
void myreverse(string &s,int begin,int end){
    for(int i=begin;i<=(begin+end)/2;i++){
        swap(s[i],s[begin+end-i]);
    }
    cout<<s<<endl;
}

int main(){
    string s;
    cin>>s;
    int n=s.size();
    myreverse(s,n/2,n-1);
}