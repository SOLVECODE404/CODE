#include<iostream>
using namespace std;
int main(){
    int n,fact=1;
    cin>>n;
    for(int i=n;i>=1;i--){
        fact*=i;
    }
    cout<<"the factorial is:";
    cout<<fact<<endl;
}