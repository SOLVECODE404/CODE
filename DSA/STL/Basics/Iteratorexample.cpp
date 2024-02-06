#include<bits/stdc++.h>
using namespace std;

template<class ForwardIterator,class T>
ForwardIterator search2(ForwardIterator start,ForwardIterator end,T k){
    while(start!=end){
        if(*start==k){
            return start;
        }start++;
    }return end;
}
int main(){
    list<int>l={1,2,3,4};
    auto it=search2(l.begin(),l.end(),5);    
    if(it==l.end()){
        cout<<"Not present";
    }
    else{
    cout<<*it<<endl;
    }
}