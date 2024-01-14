#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=n-1;i>=0;i--){
        if(i%2==0){
            for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        }
        else
        {
            for(int j=n;j>0;j--)
            {
                cout<<arr[i][j]<<" ";
            }
        }
    }cout<<endl;
}