/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> subset;
        generateSubsets(nums, 0, subset, result);
        return result;
    }
    void generateSubsets(const vector<int> &nums, int index, vector<int> &subset, vector<vector<int>> &result)
    {
        result.push_back(subset);
        for (int i = index; i < nums.size(); ++i)
        {
            subset.push_back(nums[i]);
            generateSubsets(nums, i + 1, subset, result);
            subset.pop_back();
        }
    }
};
// @lc code=end

