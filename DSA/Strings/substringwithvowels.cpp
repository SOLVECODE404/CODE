#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=0;
    int answer=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u')count++;
        else{
            answer+=count*(count+1)/2;
            count=0;
        }
    }
    answer+=count*(count+1)/2;
    cout<<answer<<endl;
}