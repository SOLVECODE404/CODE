

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;

    cin >> n;

    int x = sqrt(n);

    if ((x * x) == n)
    {

        cout << "Odd";
    }

    else
        cout << "Even";
}
