#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    if(s.size()!=t.size())cout<<"no"<<endl;
    else{
        int cnt[26]={0};
        int n=s.size();
        for(int i=0;i<n;i++){
            cnt[s[i]-'a']++;
            cnt[s[i]-'a']--;        
        }
        int fl=0;
        for(int i=0;i<26;i++){
            if(cnt[i]!=0){
                fl=1;
                break;
            }
        }
        if(fl==0)cout<<"yes"<<endl;
    }
}