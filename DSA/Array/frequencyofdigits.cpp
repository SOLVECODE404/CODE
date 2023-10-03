#include<iostream>
#include<vector>
using namespace std;
void frequency(int arr[],int n){
    vector<bool>visited(n,false);
    vector <int>arr1;
    for (int i = 0; i < n; i++)
    {
        if(visited[i]==true)
            continue;
        int count=1;
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]==arr[j]){
                count++;
                visited[j]=true;
            }
        }
        cout<<arr[i]<<" "<<count<<endl; 
        int a =count;
        if(a!=0){
            arr1.push_back(a);
        }
}
// for (int k = 0; k < arr1.size(); k++)
//         {
//             cout<<arr1[k]<<" "<<endl;
//         }for (int k = 0; k < arr1.size(); k++)
//         {
//             cout<<arr1[k]<<" "<<endl;
//         }
bool t = false;
for (int m = 0; m < arr1.size(); m++)
{
    for (int l = 0; l < arr1.size(); l++)
    {
        if (m != l)
        {
            if (arr1[m] == arr1[l])
            {
                t = true;
            }
        }
    }
        }
        // if(t==false)cout<<"unique"<<endl;
        // else cout<<"not unique";
};
int main(){
    int arr[]={10,10,10,2,2,3,3,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    frequency(arr,n);
}
