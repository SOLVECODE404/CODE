#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    vector<int>cnt(26,0),mnp(26,0);
    int n=s.size();
    int m=t.size();
    if(m>n){
        cout<<"no"<<endl;
    }
    else{
        vector<int>ans;
    for(int i=0;i<n;i++)mnp[t[i]-'a']++;
    int i=0;
    for(;i<m;i++)
        {
            cnt[s[i]-'a']++;
        }
    bool f1=true;
    for(int j=0;j<26;j++){
        if(cnt[j]!=mnp[j]){
            f1=true;
            break;
        }
    }
    if(f1)ans.push_back(0);
    while(i<n){
        cnt[s[i-m]-'a']--;
        cnt[s[i]-'a']++;
        bool f1=true;
        for(int j=0;j<26;j++){
            if(cnt[j]!=mnp[j]){
                f1=false;
                break;
            }
        }
        if(f1)ans.push_back(i-m+1);
        i++;
    }
    for(auto x:ans)cout<<x<<" ";
    }
}