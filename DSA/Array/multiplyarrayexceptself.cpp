#include<bits/stdc++.h>
using namespace std;


// int main(){
//     int arr[]={2,3,4,1};
//     int n=4;
//     for(int i=0;i<n;i++){
//         int mul=1;
//         for(int j=0;j<n;j++){
//             if(i==j)continue;
//             else {
//                 mul=mul*arr[j];
//             }
//         }cout<<mul<<" ";
//     }
// }


int main(){
    int arr[]={2,3,4,1};
    int n=4;
    int leftproduct[n];
    int rightproduct[n];
    int left=1;
    for(int i=0;i<n;i++){
        leftproduct[i]=left;
        left*=arr[i];
    };
    int right=1;
    for(int i=n-1;i>=0;i--){
        rightproduct[i]=right;
        right*= arr[i];
    };
    for(int i=0;i<n;i++){
        int result=leftproduct[i]*rightproduct[i];
        cout<<result<<" ";
    }
}