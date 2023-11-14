#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int si,int ei){
    int pivotelement=arr[(si+ei)/2];
    int count=0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2)continue;
        if(arr[i]<=pivotelement)count++;
    }
    int pivotidx=count+si;
    swap(arr[si],arr[pivotidx]);
    int i=si;
    int j=ei;
    while(i<pivotidx && j>pivotidx){
        if(arr[i]<=pivotelement)i++;
        if(arr[j]>pivotelement)j--;
        else if(arr[i]>pivotelement && arr[j]<=pivotelement){
        swap(arr[i],arr[j]);
        i++;
        j--;
        }
    }
    return pivotidx;   
}
void quickSort(int arr[],int si,int ei){
    if(si>=ei)return;
    int pi=partition(arr,si,ei);
    quickSort(arr,si,pi-1);
    quickSort(arr,si+1,ei);
}

int main(){
    int arr[]={3,5,1,7,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout << "Unsorted array:" << endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quickSort(arr,0,n-1);
    cout<<"Sorted array:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}