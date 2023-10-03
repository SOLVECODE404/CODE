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
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for (int j=0;j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
}