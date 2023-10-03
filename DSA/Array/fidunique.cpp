#include<iostream>
using namespace std;

int uniquearr(int arr[],int n){
    // int count=0,i,j;
    // for (i=0;i<n;i++)
    // {
    //     int c=0;
    //     for (j=0;j<n;j++)
    //     {
    //         if (i!=j)
    //         {
    //             if(arr[i]==arr[j])
    //             {
    //                 c++;
    //             }
    //         }
    //     }
    //     if (c==0)
    // {
    //     cout<<arr[i]<<endl;
    // }  
    // }
    // return 0;

    // second method

    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    cout<<ans<<endl;
    return 0;
}

int main(){
    int n;
    cin>>n;
    int arr[12];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    uniquearr(arr,n);
}