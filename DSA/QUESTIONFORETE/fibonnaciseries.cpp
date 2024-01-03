#include<bits/stdc++.h>
using namespace std;

void fibonnaci(int start,int next,int limit)
{
    for(int i=0;i<limit;i++){
        cout<<start<<" ";
        int temp=start;
        start=next;
        next=next+temp;
    }
}

int main(){
    int start;
    cin>>start;
    int k;
    cin>>k;
    fibonnaci(start,start+1,7);
}