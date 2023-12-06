/*
 * @lc app=leetcode id=287 lang=cpp
 *
 * [287] Find the Duplicate Number
 */

// @lc code=start
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int n = nums.size();
        int i = 0;
        while (i < n)
        {
            int correctIdx = nums[i];
            if (nums[correctIdx] == nums[i])
                return nums[i];
            else
                swap(nums[i], nums[correctIdx]);
        }
        return -1;
    }
};
// @lc code=end
