#include<bits/stdc++.h>
using namespace std;

string decimaltobinary(int num){ 
    string res="";
    while (num>0){
        if(num%2==0){
            res="0"+res;
        }
        else 
        {
            res="1"+res;
        }num/=2; 
    }
    return res;
}

int main(){
    cout<<decimaltobinary(13)<<endl;
}
// u can also that to do right shift or left shift as per
//  requires as left shift means by 1 is for multiply by 1 or
//  right shift is used for dividing by 2 if if i am doing the
//  right shift by 1 and then the number of times u shifting means u doing in the power of 2 context ...