#include<bits/stdc++.h>
using namespace std;

long long int binarytodecimal(string &binary){
    long long int n=binary.size();
    long long int result=0;
    for(int i=n-1;i>=0;i--){
        char res= binary[i];
        long long int num=res-'0';
        result+=num*(1<<(n-i-1));
    }return result;
}

int main(){
    string str="00111";
    cout<<"The no in decimal is : "<<binarytodecimal(str)<<endl;
}