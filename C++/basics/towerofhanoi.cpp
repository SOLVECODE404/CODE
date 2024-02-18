#include<bits/stdc++.h>
using namespace std;

void towerofhanoi(int n,char a ,char b,char c){
    if(n==0)return ;
    towerofhanoi(n-1,a,b,c);
    cout<<a<<"->"<<b<<endl;
    towerofhanoi(n-1,c,a,b);
}
int main(){
    int n;
    cout<<"Enter the no u want:";
    cin>>n;
    towerofhanoi(n,'A','B','C');
}