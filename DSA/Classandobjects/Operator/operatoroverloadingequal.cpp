// #include <bits/stdc++.h>
// using namespace std;

// class demo
// {
// protected:
//     int a,b;

// public:
//     void putdata()
//     {
//         cout << "enter no:"<< " ";
//         cin >> a>>b;
//     }
//     void getdata()
//     {
//         cout << a<<" "<<b;
//     }
//     void operator=(demo bb)
//     {
//         a=bb.a;
//         b=bb.b;
//     }
// };
// int main()
// {
//     demo aa, bb,cc;
//     bb.putdata();
//     aa=bb;
//     aa.getdata();
// }

// just change the symbol += and enjoy all overloading function as  the way u want it ...

#include <bits/stdc++.h>
using namespace std;

class demo
{
protected:
    int a, b;

public:
    void putdata()
    {
        cout << "enter no:"<< " ";
        cin >> a ;
    }
    void getdata()
    {
        cout << a;
    }
    void operator+=(demo bb)
    {
        a = a+bb.a;
    }
};
int main()
{
    demo aa, bb, cc;
    bb.putdata();
    aa.putdata();
    aa += bb;
    aa.getdata();
}

// just change the symbol -= and enjoy all overloading function as  the way u want it ...
