#include<bits/stdc++.h>
using namespace std;

int setcountbits(int num){
    return __builtin_popcount(num);
};

int setcountbits2(int num){
    int count=0;
    while(num>0){
        count++;
        num=num & (num-1);//brian kernelgyan algorithm
    }
    return count;
};
//one pattern in binary representation is that the two consecutive number has 
// some same part and then the rest is same but fliped from the first number in binary representation   

int main(){
    cout<<setcountbits(13)<<endl;
    cout<<setcountbits(64)<<endl;
    cout<<setcountbits2(13)<<endl;
    cout<<setcountbits2(64)<<endl;
}