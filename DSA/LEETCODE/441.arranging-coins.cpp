/*
 * @lc app=leetcode id=441 lang=cpp
 *
 * [441] Arranging Coins
 */

// @lc code=start
class Solution
{
public:
    int arrangeCoins(int n)
    {
        long long lo = 0;
        long long high = n ;
        while (lo <= high)
        {
            long long mid = lo + (high - lo) / 2;
            long m = mid * (mid + 1) / 2;
            if (m == n)
                return (int)mid;
            if (m < n)
                lo = mid + 1;
            else
                high = mid - 1;
        }
        return (int)high;
    }
};
// @lc code=end
