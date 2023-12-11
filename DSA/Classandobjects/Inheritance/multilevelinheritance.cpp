#include <bits/stdc++.h>
using namespace std;
class A
{
protected:
    int a;
public:
    void geta()
    {
        cout << "enter no:" << endl;
        cin >> a;
    }
    void puta()
    {
        cout << "value of:" << a << endl;
    }
};
class B
{
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
class C : public A, public B
{
public:
void show(){
    puta();
    putb();}
    void add()
    {
        cout << "Addition:" << a + b;
    }
};
int main()
{
    C aa;
    aa.geta();
    aa.getb();
    aa.puta();
    aa.add();
}
