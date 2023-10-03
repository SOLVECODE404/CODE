#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int c=1235;
    stringstream ss(s);
    string temp;
    vector<string>v;
    while(ss>>temp)
    {
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int count=1;
    int mxcount=1;
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i-1])count++;
        else count=1;
        mxcount=max(mxcount,count);
    }
    count=1;
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i-1])count++;
        else count=1;
        if(count==mxcount){
            cout<<v[i]<<" "<<mxcount<<endl;
        }
    }
}