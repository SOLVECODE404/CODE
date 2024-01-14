#include<iostream>
using namespace std;
// const int k=100;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }   
    for(int i=0;i<n;i++){
        for(int j=i+1;j<m;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            swap(arr[i][j],arr[i][n-j-1]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    // transformninty(n,m,*arr);
}



// #include<bits/stdc++.h>
// using namespace std;

// void rotate(vector<vector<int>>&v){
//     int n=v.size();
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             swap(v[i][j],v[j][i]);
//         }
//     }
//     for(int i=0;i<n;i++){
//         reverse(v[i].begin(),v[i].end());
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<v[i][j]<<" ";
//         }cout<<endl;
//     }
// }

// int main(){
//     int n=3;int m=3;
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     vector<vector<int>> v
//     {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };
//     rotate(v);
// }