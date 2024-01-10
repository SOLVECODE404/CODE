#include<bits/stdc++.h>
using namespace std;

//curr window=prev win sum +arr[j]-arr[i-1]

int main(){
    int arr[] = {7, 1, 2, 5, 8, 4, 9, 3, 6};
    int n = 9;
    int k = 3;
    int maxsum = INT_MIN;
    int minidx = -1;
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    maxsum=sum;
    int i=1;
    int j=k;
    while(j<n){
        sum+=arr[j]-arr[i-1];
        if(maxsum<sum){maxsum=sum;minidx=i;}
        i++;j++;
    }
    cout<<maxsum<<endl;
    cout<<minidx<<endl;
}