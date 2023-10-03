#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    char a;
    while(i<=n){
        int j=1;
        while(j<=n){
            a='A'+j-1;
            cout<<a;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}