#include<bits/stdc++.h>
using namespace std;

int path(int n){
    if(n==3)return 3;
    if(n==2)return 2;
    if(n==1)return 1;
    return path(n-1) + path(n-2)+path(n-3);
}
int main(){
    cout<<path(4);  
}

