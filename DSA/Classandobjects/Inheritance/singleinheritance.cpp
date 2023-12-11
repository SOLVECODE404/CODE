#include<bits/stdc++.h>
using namespace std;

class book
{
    protected:
    int x;
    public:
    void inputx(){
        cin>>x;
    }
    
};
class booke : public book
{
    protected:
    int y;
    public:
    void inputy(){
        cin>>y;
    }
    void add(){
        cout<<x+y;
    }
};
int main()
{
    booke b;
    b.inputx();
    b.inputy();
    b.add();
}

//in inheritance always the object is made up of derived class not the 
// base one as
// the base class can be accessed with derived class
