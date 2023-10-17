#include<bits/stdc++.h>
using namespace std;

int tree(int n){
    if(n<=1)return 1;
    if(n%2==0)return tree(n/2);
    return tree(n/2)+tree(n/2+1);

}

int main(){
    int n;
    cin>>n;
    cout<<tree(n);
}