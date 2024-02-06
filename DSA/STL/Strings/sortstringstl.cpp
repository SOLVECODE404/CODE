#include<bits/stdc++.h>
using namespace std;

bool compare(string a ,string b){
    if(a.length()==b.length()){
        return a<b;
    }
    return a.length()>b.length();
}

int main(){
    int n=3;
    string arr[3];
    for(int i=0;i<n;i++){
        getline(cin,arr[i]);
    }
    sort(arr,arr+n,compare);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
