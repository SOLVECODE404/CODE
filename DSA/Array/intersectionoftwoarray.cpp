#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=5;
    vector<int>ans;
    vector<int> arr={1,2,3};
    vector<int> arr2={1,4,5};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
            if(arr[i]==arr2[j]){
                ans.push_back(arr[i]);
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}   }