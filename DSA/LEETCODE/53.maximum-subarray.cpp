/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        int maxsum=nums[0];
        int sum=nums[0];
            for (int i = 1; i < n; i++)
            {
                if (sum + nums[i] > nums[i])
                {
                    sum = sum + nums[i];
                }
                else
                {
                    sum = nums[i];
                }
                maxsum = max(maxsum, sum);
            }
            return maxsum;
    }
};
// @lc code=end

