#include<iostream>

using namespace std;
int main(){
    int n,n10,n50,n100;
    cin>>n;
    switch(n>=100){
        case 1:
            n100=n/100;
            n-=n100*100;
            break;
    } 
    switch(n>=50){
        case 1:
            n50=n/50;
            n-=n50*50;
            break;
    } 
    switch(n>=10){
        case 1:
            n10=n/10;
            n-=n10*10;
            break;
    } 
    cout<<n100<<endl;
    cout<<n50<<endl;
    cout<<n10<<endl;
}       