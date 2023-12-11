#include <bits/stdc++.h>
using namespace std;

class Check
{
    int r;

public:
    void getdata()
    {
        cin >> r;
    }
    bool operator==(Check bb){
        if(r==bb.r)return true;
        else return false;
    }
};
int main()
{
    Check aa, bb, cc;
    aa.getdata();
    bb.getdata();
    if(aa == bb){
        cout<<"Equal"<<endl;
    }
    else 
    cout<<"Unequal"<<endl;
}