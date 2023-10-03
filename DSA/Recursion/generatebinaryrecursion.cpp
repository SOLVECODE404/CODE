#include<bits/stdc++.h>
using namespace std;

void generate(string s,int m){
    if(m==0){
        cout<<s<<endl;
        return;
    }
    generate(s+'0',m-1);
    if(s=="" || s[s.length()-1]=='0')generate(s+'1',m-1);
}

int main(){
    generate("",3);
}