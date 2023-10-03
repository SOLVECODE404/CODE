#include<iostream>
#include<vector>
using namespace std;
int duplicatearray(int arr[],int n){
    vector<bool>visited(n,false);
    for (int i = 0; i < n; i++)
    {
        if(visited[i]==true)
            continue;
        int count =0;
        for (int j=i+1;j<n;j++){
                if(arr[i]==arr[j])
                {
                    count++;
                    visited[j]=true;
                }
            }
        if(count>0)cout<<arr[i]<<" "<<endl;
    }
    return 0;
}
int main(){
    int n=8;
    int arr[8]={1,2,2,4,5,5,3,3};
    duplicatearray(arr,n);
}