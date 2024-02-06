#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
        cout<<st.top()<<" ";//reverse order print
        st.pop();
    }cout<<endl;
    while(temp.size()>0){
        cout<<temp.top()<<" ";//same order print
        st.push(temp.top());
        temp.pop();
    }
}