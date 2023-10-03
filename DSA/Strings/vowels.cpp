#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int i=0,count=0;
    while(s[i]!='\0'){
        if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u'){
            count++;
        }i++;
    }
    cout<<count<<endl;
}