#include <bits/stdc++.h>
using namespace std;

class demo
{
protected:
    int a;

public:
    void putdata()
    {
        cout << "enter no:"<< " ";
        cin >> a;
    }
    void getdata()
    {
        cout << a;
    }
    void operator++(int)
    {
        a=a+1;
    }
};
int main()
{
    demo aa, bb;
    aa.putdata();
    aa++;
    aa.getdata();
}

// just change the symbol -- and enjoy all overloading function as  the way u want it ...