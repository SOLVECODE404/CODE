/*
 * @lc app=leetcode id=81 lang=cpp
 *
 * [81] Search in Rotated Sorted Array II
 */

// @lc code=start   
class Solution
{
public:
    bool search(vector<int> &a, int tgt)
    {
        int lo = 0;
        int hi = a.size() - 1;
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (a[mid] == tgt)
                return true;
            else if(a[lo]==a[mid] and a[mid]==a[hi]){
                lo++;
                hi--;
            }
            else if (a[lo] <= a[mid])
            {
                if (a[lo] <= tgt && tgt <= a[mid])
                    hi = mid - 1;
                else
                    lo = mid + 1;
            }
            else
            {
                if (a[mid] <= tgt and tgt <= a[hi])
                    lo = mid + 1;
                else
                    hi = mid - 1;
            }
        }
        return false;
    }
};
// @lc code=end
