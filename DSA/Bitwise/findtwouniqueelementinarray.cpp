#include<bits/stdc++.h>
using namespace std;

void findunique(int *arr,int n){
    int res=0;
    for(int i=0;i<n;i++){
        res^=arr[i];
    }
    int temp=res;
    int k=0;
    while(true){
        if((temp&1)==1){
            break;
        }temp=temp>>1;
        k++;
    }
    int reval=0;
    for(int i=0;i<n;i++){
        int num=arr[i];
        if((num>>k)&1==1){
            reval^=num;
    }
        }cout<<reval<<" ";
        res=reval^res;
        cout<<res<<endl;
}

int main(){
    int arr[]={1,2,1,3,2,5,5,9,8,8};int n=10;
    findunique(arr,n);

}