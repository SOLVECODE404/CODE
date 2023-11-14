#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int si, int ei)
{
    int pivotelement = arr[(si + ei) / 2];
    int count = 0;
    for (int i = si; i <= ei; i++)
    {
        if (i == (si + ei) / 2)
            continue;
        if (arr[i] <= pivotelement)
            count++;
    }
    int pivotidx = count + si;
    swap(arr[si], arr[pivotidx]);
    int i = si;
    int j = ei;
    while (i < pivotidx && j > pivotidx)
    {
        if (arr[i] <= pivotelement)
            i++;
        if (arr[j] > pivotelement)
            j--;
        else if (arr[i] > pivotelement && arr[j] <= pivotelement)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}

int ksmallest(int arr[],int st,int ei,int k){
    int pi = partition(arr,st,ei);
    if(pi+1==k)return arr[pi];
    else if(pi+1<k)return ksmallest(arr,pi+1,ei,k);
    else return ksmallest(arr,st,pi-1,k);
}

int main(){
    int arr[]={5,1,8,2,7,6,3,4};
    int n=8;
    cout<<"Unsorted array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int k=4;cout<<endl;
    cout<<"ksmallest no is :";
    cout<<ksmallest(arr,0,n-1,k)<<endl;
    cout<<"Sorted array :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}