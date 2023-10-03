#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cin>>n;
    int count=1;
    while (i<=n){
        int j=1;
        while(j<=i){
            cout<<count;
            count+=1;
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
}