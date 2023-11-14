#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={1,9,5,7,2,0};
    for(int i=0;i<6;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int ele:arr){
        cout<<ele<<" ";
    }
}

// time complexity(0n2);
// best case (0n0;)

// in insertion sort not decided how many parts the outcome will come as like bublle is n-1 and insertion is dependent on position.....