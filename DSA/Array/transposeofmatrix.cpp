#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[n][m];
    int arr2[m][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
    {
        arr2[i][j]=arr[j][i];
    }    
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    
}