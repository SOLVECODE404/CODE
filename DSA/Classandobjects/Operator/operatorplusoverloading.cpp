#include<bits/stdc++.h>
using namespace std;

class demo{
    protected:
    int a;
    public:
    void putdata(){
        cout<<"enter no:"<<" ";
        cin>>a;
    }
    void getdata(){
        cout<<a;
    }
    demo operator+(demo bb){
        demo cc;
        cc.a = a - bb.a;
        return cc;
    }
};
int main()
{
    demo aa,bb,cc;
    aa.putdata();
    bb.putdata();
    cc=aa+bb;
    cc.getdata();
}

//just change the symbol and enjoy all overloading function as  the way u want it ...