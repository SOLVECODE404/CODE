#include <bits/stdc++.h>
using namespace std;
bool isArmstrong(int n)
{
    int sum = 0, val = n;
    while (val)
    {
        int x = val % 10;
        sum += x * x * x;
        val /= 10;
    }
    return sum == n;
}
int main()
{
    int n;
    cin >> n;
    cout << 1 << " ";
    int first = 1;
    for (int i = 1; i <= (n - 1); i++)
    {
        for (int j = first + 1;; j++)
        {
            if (isArmstrong(j))
            {
                cout << j << " ";
                first = j;
            break;
            }
        }
    }
}