#include<bits/stdc++.h>
using namespace std;
void preinpost(int n){
    if(n==0)return;
    cout<<"Pre "<<n<<endl;
    preinpost(n-1);
    cout<<"In "<<n<<endl;
    preinpost(n-1);
    cout<<"Post "<<n<<endl;
}

int main(){
    preinpost(3);
}