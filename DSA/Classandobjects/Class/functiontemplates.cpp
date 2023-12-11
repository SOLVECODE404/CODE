#include <bits/stdc++.h>
using namespace std;

template <typename T>
void Swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 5, b = 7;
    Swap<int>(a, b);
    cout << a << " " << b << endl;
    char c = 'c', d = 'd';
    Swap<char>(c, d);
    cout << c << " " << d << endl;
}
