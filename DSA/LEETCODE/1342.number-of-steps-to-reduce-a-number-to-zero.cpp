/*
 * @lc app=leetcode id=1342 lang=cpp
 *
 * [1342] Number of Steps to Reduce a Number to Zero
 */

// @lc code=start
class Solution {
public:
    int go(int num){
    if (num == 0)
        return 0;
    if (num % 2 == 0)
        return 1 + go(num / 2);
    return 1 + go(num - 1);}
    int numberOfSteps(int num) {
        return go(num);
    }
};
// @lc code=end

