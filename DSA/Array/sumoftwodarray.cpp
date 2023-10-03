#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of rows:";
    cin >>n;
    cout<<"Enter the no of columns:";
    int m;
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum+=arr[i][j];
        }
    }
    cout<<"Sum of the two d array is:"<<sum<<endl;
}