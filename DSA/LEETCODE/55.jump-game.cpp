
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int farthest = 0;
        for (int i = 0; i < n - 1; ++i)
        {
            farthest = std::max(farthest, i + nums[i]);
            if (farthest <= i)
            {
                return false;
            }
        }
        return farthest >= n - 1;
    }
};
// @lc code=end

