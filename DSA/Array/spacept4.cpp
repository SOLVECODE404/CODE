#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=i-1;
        while(j){
            cout<<" ";
            j--;
        }
        int k=i;
        while(k!=n+1){
            cout<<k;
            k++;
        }
        i++;
        cout<<endl;
    }
}