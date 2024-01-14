
class Solution
{
public:
    int countPrimes(int n)
    {
        if (n <= 2)
            return 0;
        vector<char> sieve(n, 1);
        sieve[0] = sieve[1] = 0;
        for (int i = 2; i * i < n; i++)
        {
            if (sieve[i])
            {
                for (int j = i * i; j < n; j += i)
                {
                    sieve[j] = 0;
                }
            }
        }
        int count = 0;
        for (int i = 2; i < n; i++)
        {
            if (sieve[i])
            {
                count++;
            }
        }
        return count;
    }
};
