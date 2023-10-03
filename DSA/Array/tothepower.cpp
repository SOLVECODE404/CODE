#include<iostream>
using namespace std;
int main(){
    int n,res=1;
    cout<<"Enter the no of:";
    cin>>n;
    int m;
    cout<<"To the power of:";
    cin>>m;
    for(int i=1;i<=m;i++){
        res*=n;
    }
    cout<<"the power of "<<n<<" to the power of "<<m<<" is:"<<res<<endl;
}
