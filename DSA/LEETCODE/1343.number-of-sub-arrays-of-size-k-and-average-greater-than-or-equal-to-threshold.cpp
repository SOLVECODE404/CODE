/*
 * @lc app=leetcode id=1343 lang=cpp
 *
 * [1343] Number of Sub-arrays of Size K and Average Greater than or Equal to Threshold
 */

// @lc code=start
class Solution {
public:
    int numOfSubarrays(vector<int>& a, int k, int th) {
        int n = a.size();
        int sum = 0;
        int avg = 0;
        int ans = 0;
        for (int i = 0; i < k; i++)
            sum += a[i];
        avg = sum / k;
        if (avg >= th)
            ans++;
        int i = k;
        while (i < n)
        {
            sum -= a[i - k];
            sum += a[i];
            avg = sum / k;
            if (avg >= th)
                ans++;
            i++;
        }
        return ans;
    }
};
// @lc code=end

