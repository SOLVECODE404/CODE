/*
 * @lc app=leetcode id=1011 lang=cpp
 *
 * [1011] Capacity To Ship Packages Within D Days
 */

// @lc code=start
class Solution
{
public:
    bool check(int mid, vector<int> &weigths, int days)
    {
        int n = weigths.size();
        int m = mid;
        int count = 1;
        for (int i = 0; i < n; i++)
        {
            if (m >= weigths[i])
            {
                m -= weigths[i];
            }
            else
            {
                count++;
                m = mid;
                m -= weigths[i];
            }
        }
        if (count > days)
            return false;
        else
            return true;
    }

    int shipWithinDays(vector<int> &weights, int days)
    {
        int n = weights.size();
        int max = -1;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (max < weights[i])
            {
                max = weights[i];
            }
            sum += weights[i];
        }
        int lo = max;
        int high = sum;
        int mincapacity = sum;
        while (lo <= high)
        {
            int mid = lo + (high - lo) / 2;
            if (check(mid, weights, days))
            {
                mincapacity = mid;
                high = mid - 1;
            }
            else
                lo = mid + 1;
        }
        return mincapacity;
    }
};
// @lc code=end
