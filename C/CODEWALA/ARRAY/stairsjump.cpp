#include<bits/stdc++.h>

using namespace std;

int stairsjump(int n,int m){
    if(n==0)return 1;
    if(n<0)return 0;
    int way=0;
    for(int i=1;i<m;i++){
        way+=stairsjump(n-i,m);
    }return way;
}

int main(){
    int n=4,m=3;
    cout<<stairsjump(n,m);
}