#include<bits/stdc++.h>
using namespace std;

int poweroftwoless(int x){
    int temp;
    while (x!=0){
        temp=x;
        x=x&(x-1);
    }return temp;
}
int poweroftwomore(int k){
    int temp;
    while(k!=0){
        temp=k;
        k=k&(k-1);
    }return temp*2;
}
int maxofpowerless(int x){
    x = x |( x>>1 );   
    x = x |( x>>2 );  
    x = x |( x>>4 );    
    x = x |( x>>8 );  
    x = x |( x>>16 );
    return (x+1)>>1;
}
int main(){
    cout<<poweroftwomore(24)<<endl;
    cout<<poweroftwoless(24)<<endl;
    int y=24;
    cout<<maxofpowerless(y)<<endl;
}   