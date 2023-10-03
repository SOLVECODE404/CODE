#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s[3];
    for(int i=0;i<3;i++){
        getline(cin,s[i]);
    }
    int max=stoi(s[0]);
    string smax=s[0];
    for(int i=0;i<3;i++){
        int k=stoi(s[i]);
        if(k>max){
            max=k;
            smax=s[i];
        }
    }
    cout<<"max is: "<<max<<" and the value is : "<<smax<<endl;
}
