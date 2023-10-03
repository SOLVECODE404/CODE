#include <iostream>

using namespace std;

int main(){
    int a;
    cin>>a;
    if (a>=97 && a<=102){
        cout<<"Lowercase";
    }
    else if(a>=65 && a<=70){
        cout<<"Uppercase";
    }
    else if(a>=48 && a<=57){
        cout<<"Digit";
    }
    else{
        cout<<"Special Character";
    }
}