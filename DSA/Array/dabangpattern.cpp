#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }
        int k=1;
        while(k<i){
            cout<<"*";
            k+=1;
        }
        int o=2;
        while(o<=i){
            cout<<"*";
            o++;
        }
        int m=n-i+1;
        while(m){
            cout<<m;
            m--;
        }
        cout<<endl;
        i++;
    }
}