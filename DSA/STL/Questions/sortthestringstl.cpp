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
int converttoint(string s){
    int ans=0;
    int p=1;
    for(int i=s.length()-1;i>=0;i--){
        ans+=((s[i]-'0')*p);
        p*=10;
    }return ans;
}

bool numericcompare(pair<string,string>s1,pair<string,string>s2){
    string key1,key2;
    key1=s1.second;
    key2=s2.second;
    return converttoint(key1)<converttoint(key2);
}
bool lexiographiccompare(pair<string,string>s1,pair<string,string>s2){
    string key1,key2;
    key1=s1.second;
    key2=s2.second;
    return key1<key2;
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
    string a[100];
    for(int i=0;i<n;i++){
        getline(cin,a[i]);
    }
    int key;
    string reversal ,ordering;
    cin>>key>>reversal>>ordering;
    pair<string,string>strPair[100];
    for(int i=0;i<n;i++){
        strPair[i].first=a[i];
        strPair[i].second=extractstring(a[i],key);
    }
    if(ordering=="numeric"){
        sort(strPair,strPair+n,numericcompare);
    }
    else {
        sort(strPair,strPair+n,lexiographiccompare);
    }
    if(reversal=="true"){
        for(int i=0;i<n/2;i++){
        swap(strPair[i],strPair[n-i-1]);    
        }
    }
    for(int i=0;i<n;i++){
        cout<<strPair[i].first<<endl;
    }
}