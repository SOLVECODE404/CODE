#include<bits/stdc++.h>
using namespace std;

void charcomp(char comp[],int n,int k,string final){
    if(k==0){
    cout<<final<<endl;
        return;}
    for(int i=0;i<n;i++){
        string newfinal=final+comp[i];
        charcomp(comp,n,k-1,newfinal);
    }
}

int main()
{
    char comp[]={'a','b','c'};
    int k=3;
    charcomp(comp,2,k,"");
}