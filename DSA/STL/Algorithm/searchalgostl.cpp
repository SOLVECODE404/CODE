#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 4, 2, 3, 6, 5};
    int n = 6;
    int key;
    cin >> key;
    auto it=find(arr,arr+n,key);
    int index=it-arr;
    if(index==n){
        cout<<"Not present";
    }
    else{
        cout<<"Present at index: "<<index<<endl;
    }
}