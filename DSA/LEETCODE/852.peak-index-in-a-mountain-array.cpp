/*
 * @lc app=leetcode id=852 lang=cpp
 *
 * [852] Peak Index in a Mountain Array
 */

// @lc code=start
class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int lo = 1;
        int n = arr.size();
        int high = n - 2;
        while (lo <= high)
        {
            int mid = lo + (high - lo) / 2;
            if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
                return mid;
            else if (arr[mid] > arr[mid+1])
                high = mid - 1;
            else
                lo = mid + 1;
        }
        return 100;
    }
};
// @lc code=end
