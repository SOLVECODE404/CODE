#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    // int temp=n;
    // n=m;
    // m=temp;
    n=n+m;
    m=n-m;
    n=n-m;
    cout<<n<<" "<<m<<endl;
}
// functions doesnt work for this as on passing the value 
// its address changes and can work with pointer logic or 
// reference functions doesnt work for this as on passing
//  the value its address changes and can work with pointer logic
//  or referenccefunctions doesnt work for this as on passing the
//  value its address changes and can work with pointer logic or referencce