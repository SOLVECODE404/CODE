#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int n=8;
//     int nums[n]={1,2,2,2,3,3,3,4};
//     int target;
//     cin>>target;
    // int lo=0;
    // int high=n-1;
    // while (lo<=high){
    //     int mid=lo+(high-lo)/2;
    //     if(arr[mid]==x){
    //         if(arr[mid-1]!=x){
    //             bool flag=true;
    //             cout<<"The index of first element is:"<<mid<<endl;
    //             break;
    //         }
    //         else{
    //             high=mid-1;
    //         }
    //     }
    //     else if(arr[mid]<x) lo=mid+1;
    //     else{
    //         high=mid-1;
    //     }
    // }
    
    int main(){
        vector<int>nums{1,2,2,2,3,3,3,4};
        int target=5;
        int lowestindex=lowest(nums,target);
        int maxindex=findmax(nums,target);
        if (lowestindex ==-1 && maxindex ==-1 )
        {
            cout << "[-1,-1]";
        }
        else
        {
            cout << "[" << lowestindex << "," << maxindex << "]";
        }
    }
    
