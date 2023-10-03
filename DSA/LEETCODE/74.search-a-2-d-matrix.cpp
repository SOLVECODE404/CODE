/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int n=matrix.size();
        int m=matrix[0].size();
        int lo=0;
        int high=m*n-1;
        while (lo<=high){
            int mid=lo+(high-lo)/2;
            if(matrix[mid/m][mid%m]==target)return true;
            else if(matrix[mid/m][mid%m]>target)high=mid-1;
            else lo=mid+1;
        }
        return false;
    }
};
// @lc code=end
