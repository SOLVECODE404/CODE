#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(string s,int idx,int length){
    if(idx>length)return true;
    if(s[idx]!=s[length])return false;
    return ispalindrome(s,idx+1,length-1);
}


int main(){
    string s="mome";
    cout<<ispalindrome(s,0,s.length()-1);
}