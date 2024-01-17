#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node *next;
    Node (int val){
        this->val=val;
        this->next=NULL;
    }
};
class Linkedlist{
    public:
        Node *head;
        Node *tail;
        int size;
        Linkedlist(){
            head=tail=NULL;
            size=0;
        }
        void insertattail(int val){
            Node *temp=new Node(val);
            if(size==0)head=tail=temp;
            else{
                tail->next=temp;
                tail=temp;
            }size++;
        }
        void insertathead(int val){
            Node *temp=new Node(val);
            if(size==0)head=tail=temp;
            else{
                temp->next=head;
                head=temp;
            }
        }
        void deleteatindex(int idx){
            if(size==0)cout<<"list is empty";
            else if(idx<0||idx>size){cout<<"Invalid index";return;}
            else{
                Node *temp=head;
                for(int i=1;i<=idx-1;i++){temp=temp->next;}temp->next=temp->next->next;size--;
            }
        }
        void display(){
            Node *temp=head;
            while(temp!=NULL){
                cout<<temp->val<<" ";
                temp=temp->next;
            }cout<<endl;
        }
};
int main(){
    Linkedlist  ll;
    ll.insertattail(10);
    ll.display();
    ll.insertattail(20);
    ll.display();
    ll.insertathead(30);
    ll.display();
    ll.deleteatindex(1);
    ll.display();
}