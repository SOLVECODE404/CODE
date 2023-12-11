#include<bits/stdc++.h>
using namespace std;


class base{
    public:
        virtual void fun(){
            cout<<"Base function"<<endl;}
        virtual ~base(){
            cout<<"Base destructor"<<endl;
        }
};
class derived:public base{
    public:
        virtual void fun()
        {cout<<"Derived function"<<endl;}
        ~derived(){
            cout<<"Derived destructor"<<endl;
        }
        };

int main(){
    base *b1=new base();
    base *b2=new derived();
    b1->fun();
    b2->fun();  
    delete b1;
    delete b2;//without virtual destructor it will call base destructor as it sees the type not the object
    // delete b2;//with virtual destructor it will call derived one as then it specified ,,,
}   //the third base constructor in ans is because of inheritance 