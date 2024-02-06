#include<bits/stdc++.h>
using namespace std;
void print(stack<int> st)
{
    stack<int> temp;
    while (st.size() > 0)
    {
        temp.push(st.top());
        // cout << st.top() << " "; // reverse order print
        st.pop();
    }
    cout << endl;
    while (temp.size() > 0)
    {
        cout << temp.top() << " "; // same order print
        st.push(temp.top());
        temp.pop();
    }
}
void displayrec(stack<int>&st){
    if(st.size()==0)return;
    int x=st.top();
    cout<<x<<" ";
    st.pop();
    displayrec(st);
    st.push(x);
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    print(st);
    stack<int>gt;
    stack<int>rt;
    while(st.size()>0){
        gt.push(st.top());
        st.pop();
    }
    while (gt.size()>0)
    {
        rt.push(gt.top());
        gt.pop();
    }
    while(rt.size()>0){
        st.push(rt.top());
        rt.pop();
    }
    cout<<endl;
    print(st);
    cout << endl;
    displayrec(st);
    st.display();
}