/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        //     int n=nums.size();
        //     int lo=0;
        //     int high=n-1;
        //     if(n==2){
        //         if(target==nums[0])return 0;
        //         else if(target==nums[1])return 1;
        //         else return -1;
        //     }
        //     int pivot=-1;
        //     while(lo<=high){
        //         int mid=lo+(high-lo)/2;
        //         if(mid==0)lo=mid+1;
        //         else if(mid==n-1)high=mid-1;
        //         else if(nums[mid]<nums[mid+1] && nums[mid]<nums[mid-1]){
        //             pivot=mid;
        //             break;
        //         }
        //         else if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
        //             pivot=mid+1;
        //             break;
        //         }
        //         else if(nums[mid]>nums[high])lo=mid+1;
        //         else high=mid-1;
        //     }
        //     if(pivot==-1){
        //         lo=0;
        //         high=n-1;
        //         while(lo<=high){
        //             int mid=lo+(high-lo)/2;
        //             if(nums[mid]==target)return mid;
        //             else if(nums[mid]>target)high=mid-1;
        //             else lo=mid+1;
        //         }return -1;
        //     }
        //     if(target>=nums[0] && target<=nums[pivot-1]){
        //         lo = 0;
        //         high = pivot - 1;
        //         while (lo <= high)
        //         {
        //             int mid = lo +(high - lo) / 2;
        //             if (nums[mid] == target)
        //                 return mid;
        //             else if (nums[mid] > target)
        //                 high = mid - 1;
        //             else
        //                 lo = mid + 1;
        //         }
        //     }
        //     else{
        //         lo = pivot;
        //         high = n - 1;
        //         while (lo <= high)
        //         {
        //             int mid = lo +(high - lo) / 2;
        //             if (nums[mid] == target)
        //                 return mid;
        //             else if (nums[mid] > target)
        //                 high = mid - 1;
        //             int n=nums.size();
        //     int lo=0;
        //     int high=n-1;
        //     if(n==2){
        //         if(target==nums[0])return 0;
        //         else if(target==nums[1])return 1;
        //         else return -1;
        //     }
        //     int pivot=-1;
        //     while(lo<=high){
        //         int mid=lo+(high-lo)/2;
        //         if(mid==0)lo=mid+1;
        //         else if(mid==n-1)high=mid-1;
        //         else if(nums[mid]<nums[mid+1] && nums[mid]<nums[mid-1]){
        //             pivot=mid;
        //             break;
        //         }
        //         else if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
        //             pivot=mid+1;
        //             break;
        //         }
        //         else if(nums[mid]>nums[high])lo=mid+1;
        //         else high=mid-1;
        //     }
        //     if(pivot==-1){
        //         lo=0;
        //         high=n-1;
        //         while(lo<=high){
        //             int mid=lo+(high-lo)/2;
        //             if(nums[mid]==target)return mid;
        //             else if(nums[mid]>target)high=mid-1;
        //             else lo=mid+1;
        //         }return -1;
        //     }
        //     if(target>=nums[0] && target<=nums[pivot-1]){
        //         lo = 0;
        //         high = pivot - 1;
        //         while (lo <= high)
        //         {
        //             int mid = lo +(high - lo) / 2;
        //             if (nums[mid] == target)
        //                 return mid;
        //             else if (nums[mid] > target)
        //                 high = mid - 1;
        //             else
        //                 lo = mid + 1;
        //         }
        //     }
        //     else{
        //         lo = pivot;int n=nums.size();
        //     int lo=0;
        //     int high=n-1;
        //     if(n==2){
        //         if(target==nums[0])return 0;
        //         else if(target==nums[1])return 1;
        //         else return -1;
        //     }
        //     int pivot=-1;
        //     while(lo<=high){
        //         int mid=lo+(high-lo)/2;
        //         if(mid==0)lo=mid+1;
        //         else if(mid==n-1)high=mid-1;
        //         else if(nums[mid]<nums[mid+1] && nums[mid]<nums[mid-1]){
        //             pivot=mid;
        //             break;
        //         }
        //         else if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
        //             pivot=mid+1;
        //             break;
        //         }
        //         else if(nums[mid]>nums[high])lo=mid+1;
        //         else high=mid-1;
        //     }
        //     if(pivot==-1){
        //         lo=0;
        //         high=n-1;
        //         while(lo<=high){
        //             int mid=lo+(high-lo)/2;
        //             if(nums[mid]==target)return mid;
        //             else if(nums[mid]>target)high=mid-1;
        //             else lo=mid+1;
        //         }return -1;
        //     }
        //     if(target>=nums[0] && target<=nums[pivot-1]){
        //         lo = 0;
        //         high = pivot - 1;
        //         while (lo <= high)
        //         {
        //             int mid = lo +(high - lo) / 2;
        //             if (nums[mid] == target)
        //                 return mid;
        //             else if (nums[mid] > target)
        //                 high = mid - 1;
        //             else
        //                 lo = mid + 1;
        //         }
        //     }
        //     else{
        //         lo = pivot;int n=nums.size();
        //     int lo=0;
        //     int high=n-1;
        //     if(n==2){
        //         if(target==nums[0])return 0;
        //         else if(target==nums[1])return 1;
        //         else return -1;
        //     }
        //     int pivot=-1;
        //     while(lo<=high){
        //         int mid=lo+(high-lo)/2;
        //         if(mid==0)lo=mid+1;
        //         else if(mid==n-1)high=mid-1;
        //         else if(nums[mid]<nums[mid+1] && nums[mid]<nums[mid-1]){
        //             pivot=mid;
        //             break;
        //         }
        //         else if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
        //             pivot=mid+1;
        //             break;
        //         }
        //         else if(nums[mid]>nums[high])lo=mid+1;
        //         else high=mid-1;
        //     }
        //     if(pivot==-1){
        //         lo=0;
        //         high=n-1;
        //         while(lo<=high){
        //             int mid=lo+(high-lo)/2;
        //             if(nums[mid]==target)return mid;
        //             else if(nums[mid]>target)high=mid-1;
        //             else lo=mid+1;
        //         }return -1;
        //     }
        //     if(target>=nums[0] && target<=nums[pivot-1]){
        //         lo = 0;
        //         high = pivot - 1;
        //         while (lo <= high)
        //         {
        //             int mid = lo +(high - lo) / 2;
        //             if (nums[mid] == target)
        //                 return mid;
        //             else if (nums[mid] > target)
        //                 high = mid - 1;
        //             else
        //                 lo = mid + 1;
        //         }
        //     }
        //     else{
        //         lo = pivot;
        //         high = n - 1;
        //         while (lo <= high)
        //         {
        //             int mid = lo +(high - lo) / 2;
        //             if (nums[mid] == target)
        //                 return mid;
        //             else if (nums[mid] > target)
        //                 high = mid - 1;
        //             else
        //                 lo = mid + 1;
        //         }
        //     }return -1;
        // }
        //         high = n - 1;
        //         while (lo <= high)
        //         {
        //             int mid = lo +(high - lo) / 2;
        //             if (nums[mid] == target)
        //                 return mid;
        //             else if (nums[mid] > target)
        //                 high = mid - 1;
        //             else
        //                 lo = mid + 1;
        //         }
        //     }return -1;
        // }
        //         high = n - 1;
        //         while (lo <= high)
        //         {
        //             int mid = lo +(high - lo) / 2;
        //             if (nums[mid] == target)
        //                 return mid;
        //             else if (nums[mid] > target)
        //                 high = mid - 1;
        //             else
        //                 lo = mid + 1;
        //         }
        //     }return -1;
        // }
        //                 lo = mid + 1;
        //         }
        //     }return -1;
        // }
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if(nums[i]==target){
                return i;
                }
            }
        return -1;
    }
};
// @lc code=end

