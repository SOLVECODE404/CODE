#include<bits/stdc++.h>
using namespace std;

int main(){
    int x=INT_MAX;
    int y=x*2;
    cout<<y<<endl;//because the signed integer limit is already 
    //occupied and now its overflowing the code ,...
}

// the method is to store the operation on large numbers is to 
// perform some algo i.e for two no x and y the 
// eq is (x%z + y%z )%z same for multiply ...

//for negative (x%z - y%z + z)%z

// for division the inverse division method is used ...

