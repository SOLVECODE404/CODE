#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* prev;
    Node *next;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL; 
    }
};
void display(Node * head){
    //print in same order
    if(head==NULL)return;
    cout<<head->val<<" ";
    display(head->next);
}
void display2(Node * tail){
    //print reverse method
    while(tail){
    cout<<tail->val<<" ";
    tail=tail->prev;}
    cout<<endl;
}
int main(){
    Node *a=new Node(10);
    Node *b=new Node(20);
    Node *c=new Node(30);
    Node *d=new Node(40);
    a->next=b;
    b->next=c;
    c->next=d;
    d->prev=c;
    c->prev=b;
    b->prev=a;
    display2(d);
}