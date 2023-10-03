/*
 * @lc app=leetcode id=658 lang=cpp
 *
 * [658] Find K Closest Elements
 */

// @lc code=start
class Solution
{
public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        int n = arr.size();
        vector<int> ans(k);
        if (x < arr[0])
        {
            for (int i = 0; i < k; i++)
            {
                ans[i] = arr[i];
            }
            return ans;
        }
        if (x > arr[n - 1])
        {
            int i = n - 1;
            int j = k - 1;
            while (j >= 0)
            {
                ans[j] = arr[i];
                j--;
                i++;
            }
            return ans;
        }
        int lo = 0;
        int high = n - 1;
        int mid = -1;
        bool flag = false;
        int t = 0;
        while (lo <= high)
        {
            mid = lo + (high - lo) / 2;
            if (arr[mid] == x)
            {
                ans[t] = arr[mid];
                flag = true;
                break;
            }
            else if (arr[mid] > x)
                lo = mid + 1;
            else
                high = mid - 1;
        }
        int up = lo;
        int lower = high;
        if (flag == true)
        {
            lower = mid - 1;
            up = mid + 1;
        }
        while (t < k && lower >= 0 && up <= n - 1)
        {
            int d1 = abs(x - arr[lower]);
            int d2 = abs(x - arr[high]);
            if (d1 <= d2)
            {
                ans[t] = arr[lower];
                lower--;
            }
            else
            {
                ans[t] = arr[up];
                up++;
            }
            t++;
        }
        if (lower < 0)
        {
            while (t < k)
            {
                ans[t] = arr[up];
                up++;
                t++;
            }
        }
        if (up > n - 1)
        {
            while (t < k)
            {
                ans[t] = arr[lower];
                lower--;
                t++;
            }
        }
        sort(arr.begin(), arr.end());
        return ans;
    }
};
// @lc code=end
