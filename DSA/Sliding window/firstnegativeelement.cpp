#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={2,3,4,4,-7,-1,4,-2,6};
    int n=9;
    for(auto x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    int p=-1;
    int k=3;
    int ans[n-k+1];
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            p=i;
            break;
        }
    }
    if(p==-1)ans[0]=1;
    else{ans[0]=arr[p];}
    int i=1;
    int j=k;
    while (j<n){
        if(p>=i) ans[i]= arr[p];
        else{
            p=-1;
            for(int x=i;x<j;x++){
                if(arr[x]<0){
                    p=x;
                    break;
                }
            }
            if(p!=-1)ans[i]=arr[p];
            else ans[i]=1;
        }
        i++;
        j++;
    }
    for (auto x : ans)
    {
        cout << x << " ";
    }
}