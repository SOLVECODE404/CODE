#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void display(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }cout<<endl;
}
//recursion print
void displayrec(Node * head){
    if(head==NULL)return ;
    cout<<head->val<<" ";//in same order
    displayrec(head->next);
      // cout << head->val << " "; // in reverse order
}
int size(Node *head){
    int n=0;
    Node *temp=head;
    while(temp!=NULL){
        n++;
        temp=temp->next;
    }return n;
}
void insertatend(Node *head, int val)
{
    Node *t = new Node(val);
    while (head->next != NULL)
        head = head->next;
    head->next = t;
}
int main(){
    Node * a=new Node(10);
    Node * b=new Node(20);
    Node * c=new Node(30);
    Node * d=new Node(40);
    a->next=b;
    b->next=c;
    c->next=d;
    cout<<size(a)<<endl;
    insertatend(a, 80);
    display(a);
}