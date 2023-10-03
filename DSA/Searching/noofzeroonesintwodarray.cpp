#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][4]={{0,0,0,1},{0,0,1,1},{1,1,1,1}};
    int n=3;
    int m=4;
    int max = -1;
    int row = -1;
    for(int i=0;i<n;i++){
    int lo=0;
    int high=m-1;
    int count =0;
    int idx=-1;
    int x=1;
    while(lo<=high){
        int mid=lo+(high-lo)/2;
        if(arr[i][mid]==x){
            if(mid==0){
                idx=mid;
                break;
            }
            else if(arr[i][mid-1]!=x){
                idx=mid;
                break;
            }
            else{
                high=mid-1;
            }
        }
        else if(arr[i][mid]<x){lo=mid+1;}
        else {high=mid-1;}
        }
        if(idx!=-1)count=m-idx;
        if(max<count){
            max=count;
            row=i;
        }
    }
    cout<<"max one is in:"<<row<<" row"<<" having "<<max<<" no of ones."<<endl;
}