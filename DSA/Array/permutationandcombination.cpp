#include<iostream>
using namespace std;

int fact(int x){
    int factorial=1;
    for(int i=2;i<=x;i++){
        factorial*=i;
    }
    return factorial;
}

int combination(int n,int r){
    int comb=fact(n)/(fact(r)*fact(n-r));
    return comb;
}

int main(){
    int n,r;
    cin>>n;
    cin>>r;
    int ncr=combination(n,r);
    cout<<ncr;
}