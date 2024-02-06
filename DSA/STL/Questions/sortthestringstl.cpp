#include<bits/stdc++.h>
using namespace std;
string extractstring(string str ,int key){
    char *s=strtok((char*)str.c_str()," ");
        while(key>1){
            s=strtok(NULL," ");
            key--;
        }
        return (string)s;
}
int main(){
    
    //why we created the 
    //stringextract function

    // string s("10 20 30");
    // int key;
    // cin>>key;
    // cout<<extractstring(s,key);

    //implementation of code

    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++){
        getline(cin,s[i]);
    }
    int key;
    string reversal ,order;
    pair<string string>strpair[100];
    for(int i=0;i<n;i++){
        strPair.first=a[i];
        strPair.first=extractstring(a[i],key);
    }
    if(ordering="numeric"){
        sort(strPair,strPair,n,numericcompare);
    }
}