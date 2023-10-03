#include<iostream>
using namespace std;

void reversearr(int arr[],int n){
    int a=0;
    int end=n-1;
    while(a<=end){
        swap(arr[a],arr[end]);
        a++;
        end--;
    }
    
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the straight array is:";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"The reverse array is:";
    reversearr(arr,n);
    printarray(arr,n);
}