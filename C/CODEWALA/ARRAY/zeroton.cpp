#include <bits/stdc++.h>
using namespace std;

int ton(int n)
{
    if (n == 0)
        return 5;
    int c = n % 10;
    int ans = 0;
    if (c == 0)
    {
        int mul = 1;
        int temp = n;
        while (temp > 0)
        {
            int dig = temp % 10;
            if (dig == 0)
            {
                ans += 5 * mul;
            }
            else
            {
                ans += dig * mul;
            }
            temp /= 10;
            mul *= 10;
        }
        return ans;
    }
    return ton(n / 10) * 10 + c;
}

int main()
{
    int n;
    cin >> n;
    cout << ton(n);
}
