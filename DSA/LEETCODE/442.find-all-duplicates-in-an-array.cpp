/*
 * @lc app=leetcode id=442 lang=cpp
 *
 * [442] Find All Duplicates in an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        for(int i=0;i<n;i++){
            while(nums[i]!=nums[nums[i]-1]){
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1)ans.push_back(nums[i]);
        }return ans;
        }
};
// @lc code=end

