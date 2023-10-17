#include<bits/stdc++.h>
using namespace std;

class building{
    int bno;
    int fno;
    int rno;
    string availabel;
    public:
    void set(int bno,int fno,int rno,string status);
    void get();
    void status();
}; 
void building::set(int bn, int fn, int rn, string stat){
    bno=bn;
    fno=fn;
    rno=rn;
    availabel=stat;
}
void building::get()
{
    cout<<bno<<endl;
    cout<<fno<<endl;
    cout<<rno<<endl;
}
void building ::status()
{
    cout<<availabel;
}

int main(){
    building b1,b2;
    b1.set(1,2,3,"vacant");
    b2.set(2,5,4,"full");
    // b1.get();
    // b1.status();
    cout<<endl;
    b2.get();
    b2.status();
}