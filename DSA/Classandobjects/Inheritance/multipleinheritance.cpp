#include<bits/stdc++.h>
using namespace std;

class A{
    protected:
    int a;
    public:
    void geta(){
        cout<<"enter no:"<<endl;
        cin>>a;
    }
    void puta(){
        cout<<"value of:"<<a<<endl;
    }
    void display()
    {
        cout<<"Base class:"<<endl;
    }
};

class B{
    protected:
    int b;
    public:
    void getb()
    {
        cout << "enter no:" << endl;
        cin >> b;
    }
    void putb()
    {
        cout << "value of:" << b << endl;
    }
};
class C:public A,public B{
    public:
    void add(){
        cout<<"Addition:"<<a+b;
    }
    void display()
    {
        cout << "Derived C class:" << endl;
    }
};
int main()
{
    C aa;
    aa.A::display();
    aa.geta();
    aa.getb();
    aa.puta();
    aa.add();
}