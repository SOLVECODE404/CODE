#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rev=0;
    while(n>0){
        int last=n%10;
        rev=rev*10+last;
        n/=10;
    }
    cout<<"The reverse is: ";
    cout<<rev<<endl;
}