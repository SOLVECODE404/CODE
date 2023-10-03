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
    int max=INT8_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
        }
    }
    cout<<"Max of the two d array is:"<<max<<endl;
}