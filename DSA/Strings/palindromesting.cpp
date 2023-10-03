#include<bits/stdc++.h>
using namespace std;
    int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool flag=0;
    for(int i=0;i<n/2;i++){
        if(s[i]==s[n-i-1]){
            flag=true;
        }
        else{
            flag=false;
        }
    }
    if(flag==1)cout<<"palindome";
    else cout<<"not palindrome";
}