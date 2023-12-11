#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    string vow="aeiouAEIOU";
    int vowels=0;
    getline(cin,s);
    for(int i=0;s[i]!='\0';i++){
        for(int v=0;v<=vow.length();v++){
            if(s[i]==vow[v])vowels++;   
        }
    }
    cout<<vowels<<endl;
}