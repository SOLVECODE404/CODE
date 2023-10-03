#include<iostream>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int arr2[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr2[i][j]=arr[j][i];
        }
    }
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<m;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

}