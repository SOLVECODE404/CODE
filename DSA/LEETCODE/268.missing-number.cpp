/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        // First method:????
        
        // int n=nums.size();
        // vector<bool>check(n+1,false);
        // for(int i=0;i<n;i++)
        // {
        //     int ele=nums[i];
        //     check[ele]=true;
        // }
        // for(int i=0;i<=n;i++){
        //     if(check[i]==false)return i;
        // }return 100;

        // Second method:????


        int n=nums.size();
        int i=0;
        while(i<n){
            int correctIdx=nums[i];
            if(correctIdx==i || nums[i]==n) i++;
            else swap(nums[i],nums[correctIdx]);
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i)return i;
        }return n;
    }
};
// @lc code=end

