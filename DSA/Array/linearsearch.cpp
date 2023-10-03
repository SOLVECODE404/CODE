#include<iostream>
#include<unistd.h>
using namespace std;
int main(){
    int n,x;
    bool t=false;
    cin>>n;
    cin>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=INT8_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            t=true;
        }
    }
    if(t==true)cout<<"present"<<endl;
    else cout<<"not present"<<endl;
}