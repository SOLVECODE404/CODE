#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {1,2,2,2,3,4,6,5};
    int n = 8;
    int key;
    cin >> key;
    bool present=binary_search(arr,arr+n,key);
    if(present){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Not Present"<<endl;
    }

    // lower bound to check the first occurence of the element

    auto it=lower_bound(arr,arr+n,key);
    cout<<"The lower element is present at index: "<<(it-arr)<<endl;

    // upper bound return the first occurence of next element than lower bound
    auto ft=upper_bound(arr,arr+n,key);
    cout<<"The upper element is present at index: "<<(ft-arr)<<endl;

    // to find the frequency of an element with key is 
    int freq=ft-it;
    cout<<"The freq of "<<key<<" is: "<<freq<<endl;
}