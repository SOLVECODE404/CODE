#include<iostream>
using namespace std;

int main(){
    int i=1,n,sum=0;
    cin>>n;
//     for (int i=1;i<=n;i++){
//     if(i%2==0){
//         sum+=i;
//     }
// }
//     cout<<sum<<endl;
    while(i<=n){
        if(i%2==0){
        sum+=i;
    }
        i+=1;

}
    cout<<sum<<endl;

}