#include<iostream>
#include<vector>
using namespace std;

void rotatek(int i,int j,vector<int>&v){
    for(i,j;i<=j;i++,j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int a=v.size();
    if(k>n)k=k%n;
    rotatek(0,(a-k-1),v);
    rotatek(a-k,a-1,v);
    rotatek(0,a-1,v);
}

// void rotatek(int i,int j,vector<vector<int>>&v){
//     for (i, j; i <= j; i++, j--)
//     {
//                 int temp=v[i][j];
//                 v[i][j]=v[j][i];
//                 v[j][i]=temp;
//             }
//             for(int i=0;i<v.size();i++){
//                 cout<<v[i][j]<<" ";
//             }cout<<endl;
//     }
// int main(){
//     int n,m,k;
//     cin>>n>>m>>k;
//     vector<vector<int>>v;
//     for(int i=0;i<n;i++){
//         vector<int>l;
//         for(int j=0;j<m;j++){
//             int x;
//             cin>>x;
//             l.push_back(x);
//         }
//         v.push_back(l);
//     }
//     vector<int>h;
//     for(int i=0;i<n*m;i++){
//         h.push_back(v);
//     }
//     int a=v.size();
//     rotatek(0,(a-k-1),v);
//     rotatek(a-k,a-1,v);
//     rotatek(0,a-1,v);
// }