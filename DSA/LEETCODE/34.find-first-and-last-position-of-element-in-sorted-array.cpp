/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
int findmax(vector<int> &nums, int target)
{
    int lo = 0;
    int n = nums.size();
    int high = n - 1;
    int last = -1;
    int mid = 0;
    while (lo <= high)
    {
        mid = lo + (high - lo) / 2;
        // cout<<mid<<endl;
        if (nums[mid] == target)
        {
            if (nums[mid] == target)
            {
                last = mid;
                lo = mid + 1;
            }
        }
        else if (nums[mid] < target)
        {
            lo = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return last;
}
int lowest(vector<int> &nums, int target)
{
    int n = nums.size();
    int lo = 0;
    int high = n - 1;
    int first = -1;
    int mid = 0;
    while (lo <= high)
    {
        mid = lo + (high - lo) / 2;
        // cout << mid << endl;
        if (nums[mid] == target)
        {
            if (nums[mid] == target)
            {
                first = mid;
                high = mid - 1;
            }
        }
        else if (nums[mid] < target)
        {
            lo = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return first;
}
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int largestidx=findmax(nums,target);
        int minidx=lowest(nums,target);
        return{minidx,largestidx};
    }
};
// @lc code=end

