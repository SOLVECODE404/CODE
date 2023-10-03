/*
 * @lc app=leetcode id=367 lang=cpp
 *
 * [367] Valid Perfect Square
 */

// @lc code=start
class Solution {
public:
    bool isPerfectSquare(int num) {
        int lo=0;
        int high=num;
        bool flag=false;
        while(lo<=high){
            int mid=lo+(high-lo)/2;
            long long m=(long long) mid;
            long long y=(long long)num;
            if(m*m==y)return true;
            else if(m*m<y)lo=mid+1;
            else high=mid-1;
        }
    return false;
    }
};
// @lc code=end

