#include<iostream>
#include<vector>
using namespace std;

void sort02(vector<int>v){
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(v[i]<0&&i<j)i++;
        if(v[j]>0&&i<j)j--;
        if(v[i]>0&&v[j]<0&&i<j){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
vector<int>v={2,3,-1,3,-4,-6,4,6};
sort02(v);
}