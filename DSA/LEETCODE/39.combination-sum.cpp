/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */

// @lc code=start
class Solution {
public:
    void combination(vector<vector<int>> &ans, vector<int> v, vector<int> &candidates, int target, int idx)
    {
        if (idx >= candidates.size())
        {
            if (target == 0)
                ans.push_back(v);
            return;
        }
        if (candidates[idx] <= target)
        {
            v.push_back(candidates[idx]);
            combination(ans, v, candidates, target - candidates[idx], idx);
            v.pop_back();
        }
        combination(ans, v, candidates, target, idx + 1);
    }

    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> v;
        combination(ans, v, candidates, target, 0);
        return ans;
    }
    };
// @lc code=end

