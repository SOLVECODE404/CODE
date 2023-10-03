#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>arr[i][j];
    int max=INT8_MIN;
    int index=-1;
    for(int i=0;i<n;i++){
    int sum=0;
        for(int j=0;j<m;j++){
        sum+=arr[i][j];
    }
    if(max<sum){
        max=sum;
        index=i;
    }
}
    cout<<"the max sum of row with index is:"<<index+1<<" having sum:"<<max<<endl;
}