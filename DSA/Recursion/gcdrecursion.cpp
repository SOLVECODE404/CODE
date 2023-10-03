#include<bits/stdc++.h>
using namespace std;

int gcd(int i,int j){
    if(i==0)return j;
    return gcd(j%i,i);
}

int main(){
    cout<<gcd(27,45)<<endl;
}