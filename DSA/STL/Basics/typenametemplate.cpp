#include<bits/stdc++.h>
using namespace std;

template<typename T>
int search(T arr[],int n,T key){
    for(int i=1;i<=n;i++){
        if(arr[i]==key){
            return i;
        }
    }return -1;
}
int main(){
    int a[]={1,2,3,4};// work for array
    float b[]={1.1,1.2,1.3,1.4};//work for float array and char array
    float key=1.3;
    cout<<search(b,4,key);
}