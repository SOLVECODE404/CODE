#include<bits/stdc++.h>
using namespace std;


class Complex{
    int r,i;
    public:
    void getdata(){
        cin>>r>>i;
    }
    void display(){
        cout<<"Real:"<<r<<" "<<"Imaginary:"<<i;
    }
    Complex operator+(Complex bb){
        Complex cc;
        cc.r=r+bb.r;
        cc.i=i+bb.i;
        return cc;
    }
};
int main()
{
    Complex aa,bb,cc;
    aa.getdata();
    bb.getdata();
    cc=aa+bb;
    cc.display();
}