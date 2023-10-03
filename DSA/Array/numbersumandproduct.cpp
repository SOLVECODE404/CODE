#include<iostream>
using namespace std;

int main(){
    int n,pro=1,sum;
    cin>>n;
    while(n!=0){
        int rem=n%10;
        pro*=rem;
        sum+=rem;
        n/=10;
    }
    cout<<"the sum is:"<<sum<<endl;
    cout<<"the product is:"<<pro<<endl;
}